/** @brief CSS property: scroll-padding-inline
 *
 * scroll-padding-inline CSS property.
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
                struct scroll_padding_inline : types::property_base<"scroll-padding-inline">, constants::global_values<scroll_padding_inline>
                {
                    using super_property = types::property_base<"scroll-padding-inline">;

                    scroll_padding_inline() = delete;
                    scroll_padding_inline(std::string_view v) : super_property(std::string(v)) {}
                    scroll_padding_inline(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                };
            }
        }
    }
}
