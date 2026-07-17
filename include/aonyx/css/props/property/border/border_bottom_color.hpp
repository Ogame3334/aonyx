/** @brief CSS property: border-bottom-color
 *
 * border-bottom-color CSS property.
 */
#pragma once

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
struct border_bottom_color : types::property_base<"border-bottom-color">, constants::global_values<border_bottom_color>
{
    using super_property = types::property_base<"border-bottom-color">;

    border_bottom_color() = delete;
    border_bottom_color(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
