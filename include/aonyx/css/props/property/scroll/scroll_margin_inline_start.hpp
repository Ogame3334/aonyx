/** @brief CSS property: scroll-margin-inline-start
 *
 * scroll-margin-inline-start CSS property.
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
                struct scroll_margin_inline_start : types::property_base<"scroll-margin-inline-start">, constants::global_values<scroll_margin_inline_start>
                {
                    using super_property = types::property_base<"scroll-margin-inline-start">;

                    scroll_margin_inline_start() = delete;
                    scroll_margin_inline_start(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
