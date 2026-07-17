/** @brief CSS function: grid
 *
 * CSS function utilities for grid.
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
std::string fit_content(std::string_view length)
{
    return std::format("fit-content({})", length);
}

std::string minmax(std::string_view min, std::string_view max)
{
    return std::format("minmax({}, {})", min, max);
}

std::string repeat(std::string_view repetition, std::string_view tracks)
{
    return std::format("repeat({}, {})", repetition, tracks);
}
} // namespace func
} // namespace props
} // namespace css
} // namespace aonyx
