#pragma once

#include <string>
#include <format>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct background_blend_mode : types::property_base<"background-blend-mode">, constants::global_values<background_blend_mode>
                {
                    using super_property = types::property_base<"background-blend-mode">;

                    background_blend_mode() = delete;
                    background_blend_mode(std::string_view v) : super_property(std::string(v)) {}
                    background_blend_mode(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}
                    background_blend_mode(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{}, {}, {}", v1, v2, v3)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view multiply = "multiply";
                    inline static constexpr std::string_view screen = "screen";
                    inline static constexpr std::string_view overlay = "overlay";
                    inline static constexpr std::string_view darken = "darken";
                    inline static constexpr std::string_view lighten = "lighten";
                    inline static constexpr std::string_view color_dodge = "color-dodge";
                    inline static constexpr std::string_view color_burn = "color-burn";
                    inline static constexpr std::string_view hard_light = "hard-light";
                    inline static constexpr std::string_view soft_light = "soft-light";
                    inline static constexpr std::string_view difference = "difference";
                    inline static constexpr std::string_view exclusion = "exclusion";
                    inline static constexpr std::string_view hue = "hue";
                    inline static constexpr std::string_view saturation = "saturation";
                    inline static constexpr std::string_view color = "color";
                    inline static constexpr std::string_view luminosity = "luminosity";
                };
            }
        }
    }
}
