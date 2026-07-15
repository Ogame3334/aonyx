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
                struct text_emphasis : types::property_base<"text-emphasis">, constants::global_values<text_emphasis>
                {
                    using super_property = types::property_base<"text-emphasis">;

                    text_emphasis() = delete;
                    text_emphasis(std::string_view style) : super_property(std::string(style)) {}
                    text_emphasis(std::string_view style, std::string_view color) : super_property(std::format("{} {}", style, color)) {}
                    text_emphasis(std::string_view style, std::string_view color, std::string_view shape) : super_property(std::format("{} {} {}", style, color, shape)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view filled = "filled";
                    inline static constexpr std::string_view open = "open";
                    inline static constexpr std::string_view dot = "dot";
                    inline static constexpr std::string_view circle = "circle";
                    inline static constexpr std::string_view double_circle = "double-circle";
                    inline static constexpr std::string_view triangle = "triangle";
                    inline static constexpr std::string_view sesame = "sesame";
                };
            }
        }
    }
}
