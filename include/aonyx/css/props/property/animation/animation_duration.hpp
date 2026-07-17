/** @brief CSS property: animation-duration
 *
 * animation-duration CSS property.
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
                struct animation_duration : types::property_base<"animation-duration">, constants::global_values<animation_duration>
                {
                    using super_property = types::property_base<"animation-duration">;

                    animation_duration() = delete;
                    animation_duration(std::string_view v) : super_property(std::string(v)) {}
                    animation_duration(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}
                };
            }
        }
    }
}
