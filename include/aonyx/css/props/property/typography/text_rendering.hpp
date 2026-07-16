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

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant optimize_speed{key, "optimizeSpeed"};
                    inline static constexpr types::property_constant optimize_legibility{key, "optimizeLegibility"};
                    inline static constexpr types::property_constant geometric_precision{key, "geometricPrecision"};
                };
            }
        }
    }
}
