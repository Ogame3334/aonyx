/** @brief Type aliases for HTTP request handler signatures. */
#pragma once

#include <functional>
#include <aonyx/http/request.hpp>
#include <aonyx/http/response.hpp>

namespace aonyx
{
    namespace util
    {
        /** @brief Generic handler type accepting a request, response, and extra arguments. */
        template <class... Args>
        using handler_t = std::function<void(const http::request &, http::response &, Args...)>;

        /** @brief Container type for handler extra parameters parsed from the request. */
        using inner_handler_params_t = std::vector<std::string>;
        /** @brief Internal handler type with a vector of string parameters. */
        using inner_handler_t = std::function<void(const http::request &, http::response &, const inner_handler_params_t&)>;
    }
}
