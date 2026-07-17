/**
 * @brief HTTP request types.
 *
 * Defines the request structure used throughout the HTTP stack.
 */

#pragma once

#include <string>
#include <unordered_map>

#include <aonyx/http/method.hpp>
#include <aonyx/http/headers.hpp>

namespace aonyx
{
    namespace http
    {
        /**
         * @brief Representation of an incoming HTTP request.
         *
         * Contains the HTTP method, request path, optional body,
         * and a set of headers.
         */
        struct request
        {
            http::method method;
            std::string path;
            std::string body;

            http::headers headers;
            std::unordered_map<std::string, std::string> queries;
        };
    }
}
