/** @brief HTTP session: owns a socket, reads one request, dispatches, and sends the response. */

#pragma once

#include <memory>
#include <boost/asio/ip/tcp.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/core/flat_buffer.hpp>
#include <boost/beast/http/string_body.hpp>
#include <aonyx/http/server/router.hpp>

class session : public std::enable_shared_from_this<session>
{
public:
    /** @brief Construct a session from an accepted socket.
     *  @param socket The accepted TCP socket.
     *  @param router The router to dispatch requests against. */
    session(
        boost::asio::ip::tcp::socket socket,
        const aonyx::http::router &router)
        : socket_(std::move(socket)), router_(router)
    {
    }

    /** @brief Start reading the HTTP request. */
    void run();

private:
    /** @brief Async read handler. */
    void read();
    /** @brief Dispatch the request and send the response. */
    void handle_request();

private:
    boost::asio::ip::tcp::socket socket_;
    boost::beast::flat_buffer buffer_;

    boost::beast::http::request<boost::beast::http::string_body> req_;
    const aonyx::http::router &router_;
};
