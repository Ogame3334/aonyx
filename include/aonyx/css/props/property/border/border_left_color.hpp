/** @brief CSS property: border-left-color
 *
 * border-left-color CSS property.
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
struct border_left_color : types::property_base<"border-left-color">, constants::global_values<border_left_color>
{
    using super_property = types::property_base<"border-left-color">;

    border_left_color() = delete;
    border_left_color(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
