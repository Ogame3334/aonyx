/** @brief Implementation of the HTTP session (read request, dispatch, send response). */

#include "http/server/session/session.hpp"
#include "http/server/helper/convert.hpp"

/** @brief Start the session by initiating an async read. */
void session::run()
{
    read();
}

/** @brief Begin an asynchronous HTTP read from the socket. */
void session::read()
{
    auto self = shared_from_this();

    boost::beast::http::async_read(
        socket_,
        buffer_,
        req_,
        [self](boost::beast::error_code ec, std::size_t)
        {
            if (ec)
                return;

            self->handle_request();
        });
}

/** @brief Convert the request, dispatch via router, and write the response asynchronously. */
void session::handle_request()
{
    const auto req = aonyx::impl::http::helper::request::convert(req_);
    aonyx::http::response response;
    router_.dispatch(req, response);
    auto res = std::make_shared<boost::beast::http::response<boost::beast::http::string_body>>(
        aonyx::impl::http::helper::response::convert(response));
        
    res->keep_alive(req_.keep_alive());

    auto self = shared_from_this();

    boost::beast::http::async_write(
        socket_,
        *res,
        [self, res](boost::beast::error_code ec, std::size_t)
        {
            if (ec)
                return;
                
            if (res->keep_alive())
            {
                self->req_ = {};
                self->read();
            }
            else
            {
                boost::system::error_code ec_shutdown;
                self->socket_.shutdown(
                    boost::asio::ip::tcp::socket::shutdown_send, ec_shutdown);
            }
        });
}
