#pragma once

#include <string>
#include <aonyx/http/server/middleware.hpp>

namespace aonyx::http
{
    struct serve_static_options
    {
        std::string index = "index.html";
        bool dotfiles = false;
        std::string cache_control = {};
    };

    middleware_t make_serve_static(
        const std::string& prefix,
        const std::string& root_dir,
        serve_static_options opts = {});
}
