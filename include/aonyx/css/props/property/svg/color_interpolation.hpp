/** @brief CSS property: color-interpolation
 *
 * color-interpolation CSS property.
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
struct color_interpolation : types::property_base<"color-interpolation">, constants::global_values<color_interpolation>
{
    using super_property = types::property_base<"color-interpolation">;

    color_interpolation() = delete;
    color_interpolation(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant srgb{key, "srgb"};
    inline static constexpr types::property_constant linear_rgb{key, "linearRGB"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
