/** @brief CSS property: stop-color
 *
 * stop-color CSS property.
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
struct stop_color : types::property_base<"stop-color">, constants::global_values<stop_color>
{
    using super_property = types::property_base<"stop-color">;

    stop_color() = delete;
    stop_color(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
