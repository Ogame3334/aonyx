/**
 * @brief HTTP method definitions.
 *
 * Enumerates the standard HTTP methods supported by the library.
 */

#pragma once

namespace aonyx
{
    namespace http
    {
        /**
         * @brief Supported HTTP request methods.
         *
         * Includes GET, POST, PUT, DELETE, and a sentinel for
         * unrecognised methods.
         */
        enum class method
        {
            get,
            post,
            put,
            delete_,
            unknown
        };
    }
}
