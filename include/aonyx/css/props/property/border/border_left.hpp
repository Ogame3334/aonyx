/** @brief CSS property: border-left
 *
 * border-left CSS property.
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
                struct border_left : types::property_base<"border-left">, constants::global_values<border_left>
                {
                    using super_property = types::property_base<"border-left">;

                    border_left() = delete;
                    border_left(std::string_view style) : super_property(std::string(style)) {}
                    border_left(util::numerical width, std::string_view style) : super_property(std::format("{} {}", width, style)) {}
                    border_left(std::string_view style, std::string_view color) : super_property(std::format("{} {}", style, color)) {}
                    border_left(std::string_view width, std::string_view style, std::string_view color) : super_property(std::format("{} {} {}", width, style, color)) {}
                    border_left(util::numerical width, std::string_view style, std::string_view color) : super_property(std::format("{} {} {}", width, style, color)) {}
                };
            }
        }
    }
}
