/** @brief CSS property: flood-color
 *
 * flood-color CSS property.
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
struct flood_color : types::property_base<"flood-color">, constants::global_values<flood_color>
{
    using super_property = types::property_base<"flood-color">;

    flood_color() = delete;
    flood_color(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
