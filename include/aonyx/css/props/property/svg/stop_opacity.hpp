/** @brief CSS property: stop-opacity
 *
 * stop-opacity CSS property.
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
struct stop_opacity : types::property_base<"stop-opacity">, constants::global_values<stop_opacity>
{
    using super_property = types::property_base<"stop-opacity">;

    stop_opacity() = delete;
    stop_opacity(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
