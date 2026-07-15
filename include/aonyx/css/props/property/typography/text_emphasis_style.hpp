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
                struct text_emphasis_style : types::property_base<"text-emphasis-style">, constants::global_values<text_emphasis_style>
                {
                    using super_property = types::property_base<"text-emphasis-style">;

                    text_emphasis_style() = delete;
                    text_emphasis_style(std::string_view v) : super_property(std::string(v)) {}
                    text_emphasis_style(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    text_emphasis_style(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

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
