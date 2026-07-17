/** @brief CSS function: animation
 *
 * CSS function utilities for animation.
 */
#pragma once

#include <format>
#include <string>
#include <string_view>

namespace aonyx
{
namespace css
{
namespace props
{
namespace func
{
std::string scroll(std::string_view axis)
{
    return std::format("scroll({})", axis);
}

std::string view(std::string_view axis)
{
    return std::format("view({})", axis);
}
} // namespace func
} // namespace props
} // namespace css
} // namespace aonyx
