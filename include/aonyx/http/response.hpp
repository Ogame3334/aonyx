#pragma once

#include <string>

#include <aonyx/http/headers.hpp>

namespace aonyx
{
    namespace http
    {
        struct response
        {
            int status;

            std::string body;

            http::headers headers;
        };
    }
}
