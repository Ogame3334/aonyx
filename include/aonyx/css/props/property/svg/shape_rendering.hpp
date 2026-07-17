/** @brief CSS property: shape-rendering
 *
 * shape-rendering CSS property.
 */
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

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant optimize_speed{key, "optimizeSpeed"};
                    inline static constexpr types::property_constant crisp_edges{key, "crispEdges"};
                    inline static constexpr types::property_constant geometric_precision{key, "geometricPrecision"};
                };
            }
        }
    }
}
