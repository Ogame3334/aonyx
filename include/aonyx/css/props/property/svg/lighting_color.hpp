/** @brief CSS property: lighting-color
 *
 * lighting-color CSS property.
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
struct lighting_color : types::property_base<"lighting-color">, constants::global_values<lighting_color>
{
    using super_property = types::property_base<"lighting-color">;

    lighting_color() = delete;
    lighting_color(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
