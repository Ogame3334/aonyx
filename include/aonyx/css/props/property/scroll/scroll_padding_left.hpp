/** @brief CSS property: scroll-padding-left
 *
 * scroll-padding-left CSS property.
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
                struct scroll_padding_left : types::property_base<"scroll-padding-left">, constants::global_values<scroll_padding_left>
                {
                    using super_property = types::property_base<"scroll-padding-left">;

                    scroll_padding_left() = delete;
                    scroll_padding_left(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
