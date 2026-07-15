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
                struct text_decoration_line : types::property_base<"text-decoration-line">, constants::global_values<text_decoration_line>
                {
                    using super_property = types::property_base<"text-decoration-line">;

                    text_decoration_line() = delete;
                    text_decoration_line(std::string_view v) : super_property(std::string(v)) {}
                    text_decoration_line(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    text_decoration_line(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view underline = "underline";
                    inline static constexpr std::string_view overline = "overline";
                    inline static constexpr std::string_view line_through = "line-through";
                    inline static constexpr std::string_view blink = "blink";
                    inline static constexpr std::string_view spelling_error = "spelling-error";
                    inline static constexpr std::string_view grammar_error = "grammar-error";
                };
            }
        }
    }
}
