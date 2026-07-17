/** @brief CSS property: fill-opacity
 *
 * fill-opacity CSS property.
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
struct fill_opacity : types::property_base<"fill-opacity">, constants::global_values<fill_opacity>
{
    using super_property = types::property_base<"fill-opacity">;

    fill_opacity() = delete;
    fill_opacity(std::string_view v) : super_property(std::string(v))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
