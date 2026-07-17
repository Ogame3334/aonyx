/** @brief Implementation of the HTTP router with path-trie dispatch. */

#include <algorithm>

#include <aonyx/http/server/router.hpp>

namespace aonyx
{
namespace http
{
void router::use(middleware_t mw)
{
    middlewares_.push_back({"", std::move(mw)});
}

void router::use(const std::string_view prefix, middleware_t mw)
{
    middlewares_.push_back({std::string(prefix), std::move(mw)});
}

bool router::matches_prefix(std::string_view path, std::string_view prefix)
{
    if (prefix.empty())
        return true;
    if (path == prefix)
        return true;
    if (not path.starts_with(prefix))
        return false;
    return path.size() > prefix.size() && path[prefix.size()] == '/';
}

void router::serve_static(const std::string_view prefix, const std::string& root_dir, serve_static_options opts)
{
    use(prefix, make_serve_static(std::string(prefix), root_dir, std::move(opts)));
}

/** @brief Dispatch an incoming request through middleware chain.
 *  @param req The incoming HTTP request.
 *  @param res The response to populate. */
void router::dispatch(const request& req, response& res) const
{
    if (req.method == method::unknown)
    {
        res.status = 405;
        res.body = "405 Method Not Allowed";
        res.headers["Content-Type"] = "text/html";
        return;
    }

    if (req.path.starts_with("/_aonyx/"))
    {
        handle_system_route(req, res);
        return;
    }

    std::vector<middleware_t> matched;
    for (const auto& entry : middlewares_)
    {
        if (matches_prefix(req.path, entry.prefix))
        {
            matched.push_back(entry.handler);
        }
    }

    const route_trie& trie = dispatch_trie(req.method);
    util::inner_handler_params_t params;
    auto route_handler = trie.find(req.path, params);

    std::function<void()> final_handler;
    if (route_handler)
    {
        final_handler = [&]() { route_handler(req, res, params); };
    }
    else
    {
        final_handler = [&]()
        {
            res.status = 404;
            res.body = "404 Not Found";
            res.headers["Content-Type"] = "text/html";
        };
    }

    size_t index = 0;
    std::function<void()> next;
    next = [&]()
    {
        if (index < matched.size())
        {
            matched[index++](req, res, next);
        }
        else
        {
            final_handler();
        }
    };

    next();
}

/** @brief Register a handler at the given path in the trie.
 *  @param path The URL path (e.g. "/api/users/{}").
 *  @param handler The handler to invoke on match. */
void router::route_trie::add(const std::string_view path, util::inner_handler_t&& handler)
{
    using namespace std::literals;

    auto node = root_;

    for (int i = 0; auto sv : path | std::views::split("/"sv))
    {
        if (i++ == 0)
            continue;
        auto segment = std::string(sv.begin(), sv.end());
        bool is_wildcard = (segment == "{}");

        auto result = std::find_if(node->children.begin(),
                                   node->children.end(),
                                   [&](const std::shared_ptr<node_t>& child)
                                   {
                                       if (is_wildcard)
                                           return child->is_wildcard;

                                       return !child->is_wildcard && child->segment == segment;
                                   });

        if (result == node->children.end())
        {
            auto new_node = std::make_shared<node_t>();
            new_node->segment = segment;
            new_node->is_wildcard = is_wildcard;
            node->children.push_back(new_node);

            node = new_node;
        }
        else
        {
            node = *result;
        }
    }
    node->handler = std::forward<util::inner_handler_t>(handler);
}

/** @brief Look up a path in the trie and extract wildcard parameters.
 *  @param path The URL path to match.
 *  @param params Output vector populated with wildcard segment values.
 *  @return The matching handler, or nullptr if no route matches. */
util::inner_handler_t router::route_trie::find(std::string_view path, util::inner_handler_params_t& params) const
{
    using namespace std::literals;

    params.clear();

    auto node = root_;

    for (int i = 0; auto sv : path | std::views::split("/"sv))
    {
        if (i++ == 0)
            continue;

        auto segment = std::string(sv.begin(), sv.end());

        // 固定パスを優先
        auto it = std::find_if(node->children.begin(),
                               node->children.end(),
                               [&segment](const std::shared_ptr<node_t>& child)
                               { return !child->is_wildcard && child->segment == segment; });

        if (it != node->children.end())
        {
            node = *it;
            continue;
        }

        // {} を探す
        auto wildcard_it = std::find_if(node->children.begin(),
                                        node->children.end(),
                                        [](const std::shared_ptr<node_t>& child) { return child->is_wildcard; });

        if (wildcard_it != node->children.end())
        {
            params.push_back(segment);
            node = *wildcard_it;
            continue;
        }

        return {};
    }

    return node->handler;
}
/** @brief Get the trie corresponding to the HTTP method (const).
 *  @param method The HTTP method.
 *  @return Reference to the matching route_trie. */
const router::route_trie& router::dispatch_trie(method method) const
{
    switch (method)
    {
        case method::get:
            return get_trie_;
        case method::post:
            return post_trie_;
        case method::put:
            return put_trie_;
        case method::delete_:
            return delete_trie_;
        default:
            return unknown_trie_;
    }
}
/** @brief Get the trie corresponding to the HTTP method (mutable).
 *  @param method The HTTP method.
 *  @return Reference to the matching route_trie. */
router::route_trie& router::dispatch_trie(method method)
{
    switch (method)
    {
        case method::get:
            return get_trie_;
        case method::post:
            return post_trie_;
        case method::put:
            return put_trie_;
        case method::delete_:
            return delete_trie_;
        default:
            return unknown_trie_;
    }
}

void router::handle_system_route(const request& req, response& res) const
{
    if (req.path == "/_aonyx/health")
    {
        res.status = 200;
        res.body = "{\"status\": \"ok\"}";
        res.headers["Content-Type"] = "application/json";
    }
    else
    {
        res.status = 404;
        res.body = "{\"error\": \"system route not found\"}";
        res.headers["Content-Type"] = "application/json";
    }
}

} // namespace http
} // namespace aonyx
