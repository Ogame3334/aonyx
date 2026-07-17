/** @brief CSS property: scroll-margin-inline-end
 *
 * scroll-margin-inline-end CSS property.
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
                struct scroll_margin_inline_end : types::property_base<"scroll-margin-inline-end">, constants::global_values<scroll_margin_inline_end>
                {
                    using super_property = types::property_base<"scroll-margin-inline-end">;

                    scroll_margin_inline_end() = delete;
                    scroll_margin_inline_end(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
