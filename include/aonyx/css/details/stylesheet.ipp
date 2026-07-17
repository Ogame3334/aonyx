/** @brief Template implementation of the make_stylesheet() function. */

#pragma once

#include <aonyx/css/stylesheet.hpp>

namespace aonyx
{
    namespace css
    {
        template <typename... Ts>
            requires(util::like<Ts, css::rule> && ...)
        stylesheet make_stylesheet(Ts... rules)
        {
            stylesheet result{};

            (result.add(rules), ...);

            return result;
        }
    }
}
