/** @brief CSS function: reference
 *
 * CSS function utilities for reference.
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
std::string attr(std::string_view attribute_name)
{
    return std::format("attr({})", attribute_name);
}

std::string attr(std::string_view attribute_name, std::string_view type_or_fallback)
{
    return std::format("attr({}, {})", attribute_name, type_or_fallback);
}

std::string env(std::string_view variable)
{
    return std::format("env({})", variable);
}

std::string env(std::string_view variable, std::string_view fallback)
{
    return std::format("env({}, {})", variable, fallback);
}

std::string if_(std::string_view condition, std::string_view value)
{
    return std::format("if({}, {})", condition, value);
}

std::string url(std::string_view address)
{
    return std::format("url({})", address);
}

std::string var(std::string_view name)
{
    return std::format("var(--{})", name);
}

std::string var(std::string_view name, std::string_view fallback)
{
    return std::format("var(--{}, {})", name, fallback);
}
} // namespace func
} // namespace props
} // namespace css
} // namespace aonyx
