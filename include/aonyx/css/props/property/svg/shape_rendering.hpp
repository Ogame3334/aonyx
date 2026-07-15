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
                struct shape_rendering : types::property_base<"shape-rendering">, constants::global_values<shape_rendering>
                {
                    using super_property = types::property_base<"shape-rendering">;

                    shape_rendering() = delete;
                    shape_rendering(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view optimize_speed = "optimizeSpeed";
                    inline static constexpr std::string_view crisp_edges = "crispEdges";
                    inline static constexpr std::string_view geometric_precision = "geometricPrecision";
                };
            }
        }
    }
}
