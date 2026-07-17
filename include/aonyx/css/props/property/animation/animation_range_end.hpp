/** @brief CSS property: animation-range-end
 *
 * animation-range-end CSS property.
 */
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
                struct animation_range_end : types::property_base<"animation-range-end">, constants::global_values<animation_range_end>
                {
                    using super_property = types::property_base<"animation-range-end">;

                    animation_range_end() = delete;
                    animation_range_end(std::string_view v) : super_property(std::string(v)) {}
                    animation_range_end(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                };
            }
        }
    }
}
