/** @brief CSS property: text-emphasis-color
 *
 * text-emphasis-color CSS property.
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
                struct text_emphasis_color : types::property_base<"text-emphasis-color">, constants::global_values<text_emphasis_color>
                {
                    using super_property = types::property_base<"text-emphasis-color">;

                    text_emphasis_color() = delete;
                    text_emphasis_color(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
