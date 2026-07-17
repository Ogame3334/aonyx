/** @brief CSS property: border-bottom
 *
 * border-bottom CSS property.
 */
#pragma once

#include <format>
#include <string>
#include <string_view>

#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/css/props/types/property.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace property
{
struct border_bottom : types::property_base<"border-bottom">, constants::global_values<border_bottom>
{
    using super_property = types::property_base<"border-bottom">;

    border_bottom() = delete;
    border_bottom(const std::string_view s) : super_property(std::string(s))
    {
    }
    border_bottom(util::numerical width, std::string_view style) : super_property(std::format("{} {}", width, style))
    {
    }
    border_bottom(std::string_view style, std::string_view color) : super_property(std::format("{} {}", style, color))
    {
    }
    border_bottom(std::string_view width, std::string_view style, std::string_view color)
        : super_property(std::format("{} {} {}", width, style, color))
    {
    }
    border_bottom(util::numerical width, std::string_view style, std::string_view color)
        : super_property(std::format("{} {} {}", width, style, color))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
