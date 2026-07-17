/**
 * @brief HTTP response types.
 *
 * Defines the response structure used throughout the HTTP stack.
 */

#pragma once

#include <string>

#include <aonyx/http/headers.hpp>

namespace aonyx
{
namespace http
{
/**
 * @brief Representation of an outgoing HTTP response.
 *
 * Contains the HTTP status code, response body, and headers.
 */
struct response
{
    int status;

    std::string body;

    http::headers headers;
};
} // namespace http
} // namespace aonyx
