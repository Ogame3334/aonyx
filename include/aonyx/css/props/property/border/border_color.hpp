/** @brief CSS property: border-color
 *
 * border-color CSS property.
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
struct border_color : types::property_base<"border-color">, constants::global_values<border_color>
{
    using super_property = types::property_base<"border-color">;

    border_color() = delete;
    border_color(const std::string_view s) : super_property(std::string(s))
    {
    }
    border_color(std::string_view vertical, std::string_view horizontal)
        : super_property(std::format("{} {}", vertical, horizontal))
    {
    }
    border_color(std::string_view top, std::string_view horizontal, std::string_view bottom)
        : super_property(std::format("{} {} {}", top, horizontal, bottom))
    {
    }
    border_color(std::string_view top, std::string_view right, std::string_view bottom, std::string_view left)
        : super_property(std::format("{} {} {} {}", top, right, bottom, left))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
