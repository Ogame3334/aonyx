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
    stop_color(std::string_view v) : super_property(std::string(v))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
