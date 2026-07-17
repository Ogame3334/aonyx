/** @brief CSS property: background
 *
 * background CSS property.
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
                struct background : types::property_base<"background">, constants::global_values<background>
                {
                    using super_property = types::property_base<"background">;

                    background() = delete;
                    background(std::string_view v) : super_property(std::string(v)) {}
                    background(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}
                    background(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{}, {}, {}", v1, v2, v3)) {}
                };
            }
        }
    }
}
