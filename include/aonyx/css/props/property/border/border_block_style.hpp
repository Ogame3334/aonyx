/** @brief CSS property: border-block-style
 *
 * border-block-style CSS property.
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
                struct border_block_style : types::property_base<"border-block-style">, constants::global_values<border_block_style>
                {
                    using super_property = types::property_base<"border-block-style">;

                    border_block_style() = delete;
                    border_block_style(std::string_view style) : super_property(std::string(style)) {}
                    border_block_style(std::string_view start, std::string_view end) : super_property(std::format("{} {}", start, end)) {}
                };
            }
        }
    }
}
