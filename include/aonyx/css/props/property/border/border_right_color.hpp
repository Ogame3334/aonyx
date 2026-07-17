/** @brief CSS property: border-right-color
 *
 * border-right-color CSS property.
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
struct border_right_color : types::property_base<"border-right-color">, constants::global_values<border_right_color>
{
    using super_property = types::property_base<"border-right-color">;

    border_right_color() = delete;
    border_right_color(std::string_view color) : super_property(std::string(color))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
