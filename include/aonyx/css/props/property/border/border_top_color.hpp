/** @brief CSS property: border-top-color
 *
 * border-top-color CSS property.
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
                struct border_top_color : types::property_base<"border-top-color">, constants::global_values<border_top_color>
                {
                    using super_property = types::property_base<"border-top-color">;

                    border_top_color() = delete;
                    border_top_color(std::string_view color) : super_property(std::string(color)) {}
                };
            }
        }
    }
}
