#pragma once

#include <functional>
#include <aonyx/http/request.hpp>
#include <aonyx/http/response.hpp>

namespace aonyx::http
{
    using next_t = std::function<void()>;
    using middleware_t = std::function<void(const request&, response&, next_t)>;
}
