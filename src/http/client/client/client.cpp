#include <aonyx/http/client/client.hpp>

#include <tuple>

#include <aonyx/http/method.hpp>
#include <aonyx/http/response.hpp>

#include <boost/beast/core.hpp>
#include <boost/beast/ssl.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/url.hpp>
#include <stdexcept>

#include <openssl/ssl.h>

namespace beast = boost::beast;
namespace net = boost::asio;
namespace ssl = boost::asio::ssl;
using tcp = net::ip::tcp;

namespace aonyx
{
    namespace http
    {
        namespace client
        {
            namespace helper
            {
                beast::http::verb convert(aonyx::http::method method)
                {
                    switch (method)
                    {
                    case aonyx::http::method::get:
                        return beast::http::verb::get;
                    case aonyx::http::method::post:
                        return beast::http::verb::post;
                    case aonyx::http::method::put:
                        return beast::http::verb::put;
                    case aonyx::http::method::delete_:
                        return beast::http::verb::delete_;
                    default:
                        return beast::http::verb::unknown;
                    }
                }

                std::tuple<std::string, std::string, std::string, bool> parse_url(const std::string_view url)
                {
                    auto result = boost::urls::parse_uri(url);
                    if (result.has_error())
                    {
                        throw std::invalid_argument("invalid URL: " + std::string(url));
                    }

                    auto u = result.value();

                    std::string host = std::string(u.host());
                    std::string target = std::string(u.encoded_target());
                    if (target.empty())
                    {
                        target = "/";
                    }

                    bool is_https = (u.scheme() == "https");
                    std::string port;
                    if (u.has_port())
                    {
                        port = std::string(u.port());
                    }
                    else
                    {
                        port = is_https ? "443" : "80";
                    }

                    return {host, port, target, is_https};
                }

                template <typename Stream>
                aonyx::http::response do_fetch(
                    Stream& stream,
                    const std::string_view host,
                    const std::string_view target,
                    const aonyx::http::method method,
                    const std::string_view body,
                    const std::unordered_map<std::string, std::string>& headers)
                {
                    beast::http::request<beast::http::string_body> req;
                    req.method(convert(method));
                    req.target(target);
                    req.version(11);
                    req.set(beast::http::field::host, host);
                    for (const auto &[key, value] : headers)
                    {
                        req.set(key, value);
                    }
                    req.body() = body;
                    req.prepare_payload();
                    req.keep_alive(true);

                    beast::http::write(stream, req);

                    beast::flat_buffer buf;
                    beast::http::response<beast::http::dynamic_body> res;
                    beast::http::read(stream, buf, res);

                    aonyx::http::response response;
                    response.status = res.result_int();
                    response.body = beast::buffers_to_string(res.body().data());

                    for (const auto &field : res.base())
                    {
                        response.headers.emplace(
                            std::string(field.name_string()),
                            std::string(field.value()));
                    }

                    return response;
                }
            }

            aonyx::http::response get(
                const std::string_view url,
                const std::string_view body,
                const std::unordered_map<std::string, std::string> headers)
            {
                return fetch(url, aonyx::http::method::get, body, headers);
            }
            aonyx::http::response post(
                const std::string_view url,
                const std::string_view body,
                const std::unordered_map<std::string, std::string> headers)
            {
                return fetch(url, aonyx::http::method::post, body, headers);
            }
            aonyx::http::response put(
                const std::string_view url,
                const std::string_view body,
                const std::unordered_map<std::string, std::string> headers)
            {
                return fetch(url, aonyx::http::method::put, body, headers);
            }
            aonyx::http::response delete_(
                const std::string_view url,
                const std::string_view body,
                const std::unordered_map<std::string, std::string> headers)
            {
                return fetch(url, aonyx::http::method::delete_, body, headers);
            }

            aonyx::http::response fetch(
                const std::string_view url,
                const aonyx::http::method method,
                const std::string_view body,
                const std::unordered_map<std::string, std::string> headers)
            {
                const auto [host, port, target, is_https] = helper::parse_url(url);
                return fetch(host, port, target, method, body, headers, is_https);
            }
            aonyx::http::response fetch(
                const std::string_view host,
                const std::string_view port,
                const std::string_view target,
                const aonyx::http::method method,
                const std::string_view body,
                const std::unordered_map<std::string, std::string> headers,
                bool is_https)
            {
                net::io_context ioc;
                tcp::resolver resolver(ioc);
                const auto endpoints = resolver.resolve(host, port);

                if (is_https) {
                    ssl::context ssl_context(ssl::context::tlsv13_client);
                    ssl_context.set_default_verify_paths();
                    ssl_context.set_verify_mode(ssl::verify_peer);

                    ssl::stream<tcp::socket> stream(ioc, ssl_context);

                    std::string host_str(host);
                    if (!SSL_set_tlsext_host_name(stream.native_handle(), host_str.c_str()))
                    {
                        boost::system::error_code ec{static_cast<int>(::ERR_get_error()), boost::asio::error::get_ssl_category()};
                        throw boost::system::system_error{ec};
                    }

                    boost::asio::connect(stream.next_layer(), endpoints);
                    stream.handshake(ssl::stream_base::client);

                    auto response = helper::do_fetch(stream, host, target, method, body, headers);

                    boost::system::error_code ec;
                    stream.shutdown(ec);
                    stream.next_layer().close();

                    return response;
                } else {
                    tcp::socket socket(ioc);
                    boost::asio::connect(socket, endpoints);

                    auto response = helper::do_fetch(socket, host, target, method, body, headers);

                    boost::system::error_code ec;
                    socket.shutdown(tcp::socket::shutdown_both, ec);
                    socket.close(ec);

                    return response;
                }
            }
        }
    }
}
