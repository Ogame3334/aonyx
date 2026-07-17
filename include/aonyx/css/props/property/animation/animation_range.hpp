/** @brief CSS property: animation-range
 *
 * animation-range CSS property.
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
                struct animation_range : types::property_base<"animation-range">, constants::global_values<animation_range>
                {
                    using super_property = types::property_base<"animation-range">;

                    animation_range() = delete;
                    animation_range(std::string_view v) : super_property(std::string(v)) {}
                    animation_range(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    animation_range(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}
                };
            }
        }
    }
}
