/** @brief CSS property: stroke-width
 *
 * stroke-width CSS property.
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
struct stroke_width : types::property_base<"stroke-width">, constants::global_values<stroke_width>
{
    using super_property = types::property_base<"stroke-width">;

    stroke_width() = delete;
    stroke_width(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
