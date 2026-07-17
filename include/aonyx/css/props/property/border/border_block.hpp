/** @brief CSS property: border-block
 *
 * border-block CSS property.
 */
#pragma once

#include <string>
#include <format>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct border_block : types::property_base<"border-block">, constants::global_values<border_block>
                {
                    using super_property = types::property_base<"border-block">;

                    border_block() = delete;
                    border_block(std::string_view style) : super_property(std::string(style)) {}
                    border_block(util::numerical width, std::string_view style) : super_property(std::format("{} {}", width, style)) {}
                    border_block(std::string_view style, std::string_view color) : super_property(std::format("{} {}", style, color)) {}
                    border_block(util::numerical width, std::string_view style, std::string_view color) : super_property(std::format("{} {} {}", width, style, color)) {}
                };
            }
        }
    }
}
