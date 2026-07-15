#pragma once

#include <string>
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
                struct color_interpolation : types::property_base<"color-interpolation">, constants::global_values<color_interpolation>
                {
                    using super_property = types::property_base<"color-interpolation">;

                    color_interpolation() = delete;
                    color_interpolation(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view srgb = "srgb";
                    inline static constexpr std::string_view linear_rgb = "linearRGB";
                };
            }
        }
    }
}
