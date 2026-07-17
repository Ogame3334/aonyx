/** @brief CSS property: stroke-dashoffset
 *
 * stroke-dashoffset CSS property.
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
struct stroke_dashoffset : types::property_base<"stroke-dashoffset">, constants::global_values<stroke_dashoffset>
{
    using super_property = types::property_base<"stroke-dashoffset">;

    stroke_dashoffset() = delete;
    stroke_dashoffset(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
