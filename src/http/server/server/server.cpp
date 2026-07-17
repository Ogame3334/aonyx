/** @brief Implementation of the HTTP server public interface (pimpl wrapper). */

#include <aonyx/http/server/server.hpp>
#include "http/server/server/server_impl.hpp"

namespace aonyx::http
{

    /** @brief Construct a server listening on the default port 8080. */
    server::server() : pimpl_(std::make_unique<server_impl>(8080))
    {
    }

    /** @brief Construct a server listening on the given port.
     *  @param port The TCP port to bind to. */
    server::server(unsigned short port) : pimpl_(std::make_unique<server_impl>(port))
    {
    }

    /** @brief Destroy the server, releasing the pimpl. */
    server::~server()
    {
    }

    /** @brief Start the server (blocking call, runs the io_context). */
    void server::run()
    {
        pimpl_->run();
    }

    /** @brief Access the router to register routes.
     *  @return Reference to the server's router. */
    router &server::router()
    {
        return pimpl_->router();
    }

    void server::use(middleware_t mw)
    {
        pimpl_->router().use(std::move(mw));
    }

    void server::use(const std::string_view prefix, middleware_t mw)
    {
        pimpl_->router().use(prefix, std::move(mw));
    }

} // namespace aonyx::http
