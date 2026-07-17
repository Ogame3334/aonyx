/** @brief CSS function: anchor
 *
 * CSS function utilities for anchor.
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
std::string anchor(std::string_view anchor_name)
{
    return std::format("anchor({})", anchor_name);
}

std::string anchor(std::string_view anchor_name, std::string_view position)
{
    return std::format("anchor({} {})", anchor_name, position);
}

std::string anchor_size(std::string_view axis)
{
    return std::format("anchor-size({})", axis);
}
} // namespace func
} // namespace props
} // namespace css
} // namespace aonyx
