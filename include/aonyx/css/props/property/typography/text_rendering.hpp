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
                struct text_rendering : types::property_base<"text-rendering">, constants::global_values<text_rendering>
                {
                    using super_property = types::property_base<"text-rendering">;

                    text_rendering() = delete;
                    text_rendering(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view optimize_speed = "optimizeSpeed";
                    inline static constexpr std::string_view optimize_legibility = "optimizeLegibility";
                    inline static constexpr std::string_view geometric_precision = "geometricPrecision";
                };
            }
        }
    }
}
