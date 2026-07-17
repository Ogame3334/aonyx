/** @brief CSS property: border-color
 *
 * border-color CSS property.
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
                struct border_color : types::property_base<"border-color">, constants::global_values<border_color>
                {
                    using super_property = types::property_base<"border-color">;

                    border_color() = delete;
                    border_color(std::string_view color) : super_property(std::string(color)) {}
                    border_color(std::string_view vertical, std::string_view horizontal) : super_property(std::format("{} {}", vertical, horizontal)) {}
                    border_color(std::string_view top, std::string_view horizontal, std::string_view bottom) : super_property(std::format("{} {} {}", top, horizontal, bottom)) {}
                    border_color(std::string_view top, std::string_view right, std::string_view bottom, std::string_view left) : super_property(std::format("{} {} {} {}", top, right, bottom, left)) {}
                };
            }
        }
    }
}
