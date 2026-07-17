/** @brief CSS property: scale
 *
 * scale CSS property.
 */
#pragma once

#include <format>

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
                struct scale : types::property_base<"scale">, constants::global_values<scale>
                {
                    using super_property = types::property_base<"scale">;

                    scale() = delete;
                    scale(double a) : super_property(std::to_string(a)) {}
                    scale(double a, double b) : super_property(std::format("{} {}", a, b)) {}
                    scale(double a, double b, double c) : super_property(std::format("{} {} {}", a, b, c)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
