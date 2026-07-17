/** @brief CSS property: stroke-width
 *
 * stroke-width CSS property.
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
                struct stroke_width : types::property_base<"stroke-width">, constants::global_values<stroke_width>
                {
                    using super_property = types::property_base<"stroke-width">;

                    stroke_width() = delete;
                    stroke_width(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
