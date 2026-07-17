/** @brief CSS property: flood-opacity
 *
 * flood-opacity CSS property.
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
struct flood_opacity : types::property_base<"flood-opacity">, constants::global_values<flood_opacity>
{
    using super_property = types::property_base<"flood-opacity">;

    flood_opacity() = delete;
    flood_opacity(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
