/** @brief CSS property: border-style
 *
 * border-style CSS property.
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
struct border_style : types::property_base<"border-style">, constants::global_values<border_style>
{
    using super_property = types::property_base<"border-style">;

    border_style() = delete;
    border_style(std::string_view style) : super_property(std::string(style))
    {
    }
    border_style(std::string_view vertical, std::string_view horizontal)
        : super_property(std::format("{} {}", vertical, horizontal))
    {
    }
    border_style(std::string_view top, std::string_view horizontal, std::string_view bottom)
        : super_property(std::format("{} {} {}", top, horizontal, bottom))
    {
    }
    border_style(std::string_view top, std::string_view right, std::string_view bottom, std::string_view left)
        : super_property(std::format("{} {} {} {}", top, right, bottom, left))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
