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
                struct font : types::property_base<"font">, constants::global_values<font>
                {
                    using super_property = types::property_base<"font">;

                    font() = delete;
                    font(std::string_view system_font) : super_property(std::string(system_font)) {}
                    font(std::string_view style, std::string_view weight, std::string_view size, std::string_view family) : super_property(std::format("{} {} {} / normal {}", style, weight, size, family)) {}
                    font(std::string_view style, std::string_view weight, std::string_view size_line_height, std::string_view family) : super_property(std::format("{} {} {} {}", style, weight, size_line_height, family)) {}

                    inline static constexpr std::string_view caption = "caption";
                    inline static constexpr std::string_view icon = "icon";
                    inline static constexpr std::string_view menu = "menu";
                    inline static constexpr std::string_view message_box = "message-box";
                    inline static constexpr std::string_view small_caption = "small-caption";
                    inline static constexpr std::string_view status_bar = "status-bar";
                };
            }
        }
    }
}
