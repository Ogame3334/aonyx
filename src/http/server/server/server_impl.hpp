/** @brief Internal pimpl class for the HTTP server. */

#pragma once

#include <aonyx/http/server/server.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <aonyx/http/server/router.hpp>

namespace aonyx::http
{
    class server::server_impl
    {
    public:
        /** @brief Construct with a port and set up the acceptor.
         *  @param port The TCP port to bind to. */
        server_impl(unsigned short port) : io_(),
                                           acceptor_(
                                               io_,
                                               {boost::asio::ip::tcp::v4(),
                                                port}) {}
        /** @brief Start the accept loop and worker threads. */
        void run();
        /** @brief Access the router for route registration. */
        aonyx::http::router &router();

    private:
        /** @brief Async accept callback (re-arms itself). */
        void accept();

    private:
        boost::asio::io_context io_;         ///< ASIO I/O context.
        boost::asio::ip::tcp::acceptor acceptor_; ///< TCP acceptor.
        aonyx::http::router router_;
    };
}
