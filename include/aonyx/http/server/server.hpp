/**
 * @brief HTTP server module.
 *
 * Provides the server class for handling incoming HTTP requests
 * on a configurable port with a pluggable router.
 */

#pragma once

#include <memory>
#include <aonyx/http/server/router.hpp>

namespace aonyx
{
    namespace http
    {
        /**
         * @brief Core HTTP server using the pimpl idiom.
         *
         * Listens on the specified port and dispatches incoming requests
         * through the registered router.
         */
        class server
        {
        public:
            /** @brief Construct a server listening on port 8080. */
            server();
            /** @brief Construct a server listening on the given @p port. */
            server(unsigned short port);
            /** @brief Destroy the server and release its resources. */
            ~server();

            /** @brief Start the server's main event loop (blocking). */
            void run();
            /** @brief Access the router to register routes. */
            http::router &router();

        private:
            class server_impl;
            std::unique_ptr<server_impl> pimpl_;
        };
    }
}
