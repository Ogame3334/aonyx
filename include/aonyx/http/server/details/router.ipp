/**
 * @brief Template method implementations for router.
 *
 * This file is included automatically by router.hpp and should
 * not be included directly.
 */

#pragma once

#include <aonyx/http/server/router.hpp>
#include <aonyx/util/handler/handler.hpp>
#include <aonyx/util/handler/make_handler.hpp>

namespace aonyx
{
    namespace http
    {
        /**
         * @brief Register a GET route (template implementation).
         * @tparam Args Handler argument types.
         * @param path URL path pattern.
         * @param handler Callable to invoke on match.
         */
        template <class... Args>
        void router::get(const std::string_view path, util::handler_t<std::type_identity_t<Args>...> &&handler)
        {
            register_method<Args...>(method::get, path, std::forward<util::handler_t<std::type_identity_t<Args>...>>(handler));
        }
        /**
         * @brief Register a POST route (template implementation).
         * @tparam Args Handler argument types.
         * @param path URL path pattern.
         * @param handler Callable to invoke on match.
         */
        template <class... Args>
        void router::post(const std::string_view path, util::handler_t<std::type_identity_t<Args>...> &&handler)
        {
            register_method<Args...>(method::post, path, std::forward<util::handler_t<std::type_identity_t<Args>...>>(handler));
        }
        /**
         * @brief Register a PUT route (template implementation).
         * @tparam Args Handler argument types.
         * @param path URL path pattern.
         * @param handler Callable to invoke on match.
         */
        template <class... Args>
        void router::put(const std::string_view path, util::handler_t<std::type_identity_t<Args>...> &&handler)
        {
            register_method<Args...>(method::put, path, std::forward<util::handler_t<std::type_identity_t<Args>...>>(handler));
        }
        /**
         * @brief Register a DELETE route (template implementation).
         * @tparam Args Handler argument types.
         * @param path URL path pattern.
         * @param handler Callable to invoke on match.
         */
        template <class... Args>
        void router::delete_(const std::string_view path, util::handler_t<std::type_identity_t<Args>...> &&handler)
        {
            register_method<Args...>(method::delete_, path, std::forward<util::handler_t<std::type_identity_t<Args>...>>(handler));
        }

        /**
         * @brief Internal helper to register any method in the route trie.
         * @tparam Args Handler argument types.
         * @param method HTTP method for the trie lookup.
         * @param path URL path pattern.
         * @param handler Callable to wrap and store.
         */
        template <class... Args>
        void router::register_method(http::method method, const std::string_view path, util::handler_t<std::type_identity_t<Args>...> &&handler)
        {
            auto& trie = dispatch_trie(method);
            util::inner_handler_t inner_handler = util::make_handler(std::forward<util::handler_t<Args...>>(handler));

            trie.add(path, std::move(inner_handler));
        }
    }
}
