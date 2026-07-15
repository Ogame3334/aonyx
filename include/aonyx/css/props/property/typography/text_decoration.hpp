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
                struct text_decoration : types::property_base<"text-decoration">, constants::global_values<text_decoration>
                {
                    using super_property = types::property_base<"text-decoration">;

                    text_decoration() = delete;
                    text_decoration(std::string_view line) : super_property(std::string(line)) {}
                    text_decoration(std::string_view line, std::string_view style) : super_property(std::format("{} {}", line, style)) {}
                    text_decoration(std::string_view line, std::string_view style, std::string_view color) : super_property(std::format("{} {} {}", line, style, color)) {}
                    text_decoration(std::string_view line, std::string_view color, std::string_view style) : super_property(std::format("{} {} {}", line, color, style)) {}
                    text_decoration(std::string_view line, std::string_view style, std::string_view color, std::string_view thickness) : super_property(std::format("{} {} {} {}", line, style, color, thickness)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view underline = "underline";
                    inline static constexpr std::string_view overline = "overline";
                    inline static constexpr std::string_view line_through = "line-through";
                    inline static constexpr std::string_view blink = "blink";
                    inline static constexpr std::string_view solid = "solid";
                    inline static constexpr std::string_view double_ = "double";
                    inline static constexpr std::string_view dotted = "dotted";
                    inline static constexpr std::string_view dashed = "dashed";
                    inline static constexpr std::string_view wavy = "wavy";
                };
            }
        }
    }
}
