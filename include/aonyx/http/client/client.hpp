/**
 * @brief HTTP client functions.
 *
 * Provides convenience wrappers for performing HTTP requests
 * against remote servers.
 */

#pragma once

#include <cstdint>
#include <string>
#include <string_view>
#include <unordered_map>

#include <aonyx/http/headers.hpp>
#include <aonyx/http/method.hpp>
#include <aonyx/http/response.hpp>

namespace aonyx
{
namespace http
{
/**
 * @brief Free functions for making HTTP requests.
 *
 * The client namespace offers fetch() for full control as well
 * as get(), post(), put(), and delete_() convenience wrappers.
 */
namespace client
{
/**
 * @brief Perform an HTTP request by URL.
 * @param url Full URL (e.g., "http://example.com/api").
 * @param method HTTP method to use.
 * @param body Request body (empty by default).
 * @param headers Additional HTTP headers.
 * @return The server's HTTP response.
 */
aonyx::http::response fetch(const std::string_view url,
                            const aonyx::http::method method,
                            const std::string_view body = "",
                            const http::headers headers = {});
/**
 * @brief Perform an HTTP request with explicit connection parameters.
 * @param host Remote host name or IP.
 * @param port Remote port.
 * @param target Request path (e.g., "/api/resource").
 * @param method HTTP method to use (default GET).
 * @param body Request body (empty by default).
 * @param headers Additional HTTP headers.
 * @param is_https Use TLS if true (default false).
 * @return The server's HTTP response.
 */
aonyx::http::response fetch(const std::string_view host,
                            const std::string_view port,
                            const std::string_view target,
                            const aonyx::http::method method = aonyx::http::method::get,
                            const std::string_view body = "",
                            const http::headers headers = {},
                            bool is_https = false);

/**
 * @brief Perform an HTTP GET request.
 * @param url Target URL.
 * @param body Optional request body.
 * @param headers Additional HTTP headers.
 * @return The server's HTTP response.
 */
aonyx::http::response
get(const std::string_view url, const std::string_view body = "", const http::headers headers = {});
/**
 * @brief Perform an HTTP POST request.
 * @param url Target URL.
 * @param body Optional request body.
 * @param headers Additional HTTP headers.
 * @return The server's HTTP response.
 */
aonyx::http::response
post(const std::string_view url, const std::string_view body = "", const http::headers headers = {});
/**
 * @brief Perform an HTTP PUT request.
 * @param url Target URL.
 * @param body Optional request body.
 * @param headers Additional HTTP headers.
 * @return The server's HTTP response.
 */
aonyx::http::response
put(const std::string_view url, const std::string_view body = "", const http::headers headers = {});
/**
 * @brief Perform an HTTP DELETE request.
 * @param url Target URL.
 * @param body Optional request body.
 * @param headers Additional HTTP headers.
 * @return The server's HTTP response.
 */
aonyx::http::response
delete_(const std::string_view url, const std::string_view body = "", const http::headers headers = {});
} // namespace client
} // namespace http
} // namespace aonyx
