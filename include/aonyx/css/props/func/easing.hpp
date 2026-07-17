/** @brief CSS function: easing
 *
 * CSS function utilities for easing.
 */
#pragma once

#include <string>
#include <string_view>
#include <format>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace func
            {
                std::string linear(std::string_view points)
                {
                    return std::format("linear({})", points);
                }

                std::string cubic_bezier(std::string_view x1, std::string_view y1, std::string_view x2, std::string_view y2)
                {
                    return std::format("cubic-bezier({}, {}, {}, {})", x1, y1, x2, y2);
                }

                std::string steps(std::string_view count, std::string_view direction)
                {
                    return std::format("steps({}, {})", count, direction);
                }

                std::string steps(std::string_view count)
                {
                    return std::format("steps({})", count);
                }
            }
        }
    }
}
