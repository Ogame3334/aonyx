/** @brief CSS function: arithmetic
 *
 * CSS function utilities for arithmetic.
 */
#pragma once

#include <string>
#include <string_view>
#include <format>

#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace func
            {
                std::string calc(util::numerical expression)
                {
                    return std::format("calc({})", expression);
                }

                std::string calc_size(std::string_view basis, util::numerical expression)
                {
                    return std::format("calc-size({}, {})", basis, expression);
                }
            }
        }
    }
}
