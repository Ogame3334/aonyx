/** @brief CSS property: mix-blend-mode
 *
 * mix-blend-mode CSS property.
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
struct mix_blend_mode : types::property_base<"mix-blend-mode">, constants::global_values<mix_blend_mode>
{
    using super_property = types::property_base<"mix-blend-mode">;

    mix_blend_mode() = delete;
    mix_blend_mode(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant multiply{key, "multiply"};
    inline static constexpr types::property_constant screen{key, "screen"};
    inline static constexpr types::property_constant overlay{key, "overlay"};
    inline static constexpr types::property_constant darken{key, "darken"};
    inline static constexpr types::property_constant lighten{key, "lighten"};
    inline static constexpr types::property_constant color_dodge{key, "color-dodge"};
    inline static constexpr types::property_constant color_burn{key, "color-burn"};
    inline static constexpr types::property_constant hard_light{key, "hard-light"};
    inline static constexpr types::property_constant soft_light{key, "soft-light"};
    inline static constexpr types::property_constant difference{key, "difference"};
    inline static constexpr types::property_constant exclusion{key, "exclusion"};
    inline static constexpr types::property_constant hue{key, "hue"};
    inline static constexpr types::property_constant saturation{key, "saturation"};
    inline static constexpr types::property_constant color{key, "color"};
    inline static constexpr types::property_constant luminosity{key, "luminosity"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
