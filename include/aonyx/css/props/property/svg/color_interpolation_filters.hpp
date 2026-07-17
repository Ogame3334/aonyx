/** @brief CSS property: color-interpolation-filters
 *
 * color-interpolation-filters CSS property.
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
struct color_interpolation_filters : types::property_base<"color-interpolation-filters">,
                                     constants::global_values<color_interpolation_filters>
{
    using super_property = types::property_base<"color-interpolation-filters">;

    color_interpolation_filters() = delete;
    color_interpolation_filters(std::string_view v) : super_property(std::string(v))
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
