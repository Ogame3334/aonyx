/** @brief CSS property: svg-y
 *
 * svg-y CSS property.
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
struct svg_y : types::property_base<"y">, constants::global_values<svg_y>
{
    using super_property = types::property_base<"y">;

    svg_y() = delete;
    svg_y(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
