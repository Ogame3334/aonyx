/** @brief CSS property: scroll-margin-bottom
 *
 * scroll-margin-bottom CSS property.
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
                struct scroll_margin_bottom : types::property_base<"scroll-margin-bottom">, constants::global_values<scroll_margin_bottom>
                {
                    using super_property = types::property_base<"scroll-margin-bottom">;

                    scroll_margin_bottom() = delete;
                    scroll_margin_bottom(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
