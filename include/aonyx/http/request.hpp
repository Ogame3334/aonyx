#pragma once

#include <string>

#include <aonyx/http/method.hpp>
#include <aonyx/http/headers.hpp>

namespace aonyx
{
    namespace http
    {
        struct request
        {
            http::method method;
            std::string path;
            std::string body;

            http::headers headers;
        };
    }
}
