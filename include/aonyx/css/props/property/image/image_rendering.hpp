/** @brief CSS property: image-rendering
 *
 * image-rendering CSS property.
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
struct image_rendering : types::property_base<"image-rendering">, constants::global_values<image_rendering>
{
    using super_property = types::property_base<"image-rendering">;

    image_rendering() = delete;
    image_rendering(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant smooth{key, "smooth"};
    inline static constexpr types::property_constant high_quality{key, "high-quality"};
    inline static constexpr types::property_constant crisp_edges{key, "crisp-edges"};
    inline static constexpr types::property_constant pixelated{key, "pixelated"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
