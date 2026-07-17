/**
 * @brief HTTP request router.
 *
 * Maps URL patterns to handler functions for each HTTP method
 * using a prefix-trie (radix tree) data structure.
 */

#pragma once

#include <functional>
#include <string>
#include <vector>
#include <memory>
#include <string_view>
#include <unordered_map>
#include <ranges>
#include <aonyx/dom/html_node.hpp>
#include <aonyx/http/request.hpp>
#include <aonyx/http/response.hpp>
#include <aonyx/http/server/middleware.hpp>
#include <aonyx/util/handler/handler.hpp>

#define AONYX_PARAM(req, res) const aonyx::http::request& req, aonyx::http::response& res

namespace aonyx
{
    namespace http
    {
        /**
         * @brief Trie-based HTTP request router.
         *
         * Supports GET, POST, PUT, and DELETE method routing with
         * wildcard path parameters.
         */
        class router
        {
        public:
            /**
             * @brief Register a handler for GET requests on the given path.
             * @tparam Args Handler argument types.
             * @param path URL path pattern (e.g., "/api/users/:id").
             * @param handler Callable invoked when the path is matched.
             */
            template <class... Args>
            void get(const std::string_view path, util::handler_t<std::type_identity_t<Args>...> &&handler);
            /**
             * @brief Register a handler for POST requests on the given path.
             * @tparam Args Handler argument types.
             * @param path URL path pattern.
             * @param handler Callable invoked when the path is matched.
             */
            template <class... Args>
            void post(const std::string_view path, util::handler_t<std::type_identity_t<Args>...> &&handler);
            /**
             * @brief Register a handler for PUT requests on the given path.
             * @tparam Args Handler argument types.
             * @param path URL path pattern.
             * @param handler Callable invoked when the path is matched.
             */
            template <class... Args>
            void put(const std::string_view path, util::handler_t<std::type_identity_t<Args>...> &&handler);
            /**
             * @brief Register a handler for DELETE requests on the given path.
             * @tparam Args Handler argument types.
             * @param path URL path pattern.
             * @param handler Callable invoked when the path is matched.
             */
            template <class... Args>
            void delete_(const std::string_view path, util::handler_t<std::type_identity_t<Args>...> &&handler);

            void use(middleware_t mw);
            void use(const std::string_view prefix, middleware_t mw);

            /**
             * @brief Route an incoming request to its registered handler.
             * @param req The incoming HTTP request.
             * @param res The response object to be populated by the handler.
             */
            void dispatch(const request &req, response &res) const;

        private:
            class route_trie
            {
            public:
                struct node_t
                {
                    std::string segment;
                    bool is_wildcard = false;

                    std::vector<std::shared_ptr<node_t>> children;

                    util::inner_handler_t handler;
                };

                route_trie() : root_(std::make_shared<node_t>()) {}
                ~route_trie() = default;

                void add(const std::string_view path, util::inner_handler_t &&handler);
                util::inner_handler_t find(const std::string_view path, util::inner_handler_params_t &params) const;

            private:
                std::shared_ptr<node_t> root_;
            };

            template <class... Args>
            void register_method(http::method method, const std::string_view path, util::handler_t<std::type_identity_t<Args>...> &&handler);

            const route_trie &dispatch_trie(method method) const;
            route_trie &dispatch_trie(method method);

            struct middleware_entry
            {
                std::string prefix;
                middleware_t handler;
            };

            static bool matches_prefix(std::string_view path, std::string_view prefix);

            route_trie get_trie_;
            route_trie post_trie_;
            route_trie put_trie_;
            route_trie delete_trie_;
            route_trie unknown_trie_;

            std::vector<middleware_entry> middlewares_;
        };
    }
}

#include <aonyx/http/server/details/router.ipp>
