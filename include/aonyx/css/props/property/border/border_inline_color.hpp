/** @brief CSS property: border-inline-color
 *
 * border-inline-color CSS property.
 */
#pragma once

#include <format>
#include <string>
#include <string_view>

#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/css/props/types/property.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace property
{
struct border_inline_color : types::property_base<"border-inline-color">, constants::global_values<border_inline_color>
{
    using super_property = types::property_base<"border-inline-color">;

    border_inline_color() = delete;
    border_inline_color(const std::string_view s) : super_property(std::string(s))
    {
    }
    border_inline_color(std::string_view start, std::string_view end) : super_property(std::format("{} {}", start, end))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
