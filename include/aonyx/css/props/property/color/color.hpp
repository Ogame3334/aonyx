/** @brief CSS property: color
 *
 * color CSS property.
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
struct color : types::property_base<"color">, constants::global_values<color>
{
    using super_property = types::property_base<"color">;

    color() = delete;
    color(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant current_color{key, "currentcolor"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
