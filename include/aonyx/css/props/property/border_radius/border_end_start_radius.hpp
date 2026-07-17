/** @brief CSS property: border-end-start-radius
 *
 * border-end-start-radius CSS property.
 */
#pragma once

#include <string>
#include <format>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct border_end_start_radius : types::property_base<"border-end-start-radius">, constants::global_values<border_end_start_radius>
                {
                    using super_property = types::property_base<"border-end-start-radius">;

                    border_end_start_radius() = delete;
                    border_end_start_radius(util::numerical r) : super_property(r.to_string()) {}
                    border_end_start_radius(util::numerical horizontal, util::numerical vertical) : super_property(std::format("{} {}", horizontal, vertical)) {}
                };
            }
        }
    }
}
