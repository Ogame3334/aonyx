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

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant srgb{key, "srgb"};
                    inline static constexpr types::property_constant linear_rgb{key, "linearRGB"};
                };
            }
        }
    }
}
