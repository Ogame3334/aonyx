/** @brief CSS property: border-inline-style
 *
 * border-inline-style CSS property.
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
                struct border_inline_style : types::property_base<"border-inline-style">, constants::global_values<border_inline_style>
                {
                    using super_property = types::property_base<"border-inline-style">;

                    border_inline_style() = delete;
                    border_inline_style(std::string_view style) : super_property(std::string(style)) {}
                    border_inline_style(std::string_view start, std::string_view end) : super_property(std::format("{} {}", start, end)) {}
                };
            }
        }
    }
}
