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
                struct list_style : types::property_base<"list-style">, constants::global_values<list_style>
                {
                    using super_property = types::property_base<"list-style">;

                    list_style() = delete;
                    list_style(std::string_view type) : super_property(std::string(type)) {}
                    list_style(std::string_view type, std::string_view position) : super_property(std::format("{} {}", type, position)) {}
                    list_style(std::string_view type, std::string_view position, std::string_view image) : super_property(std::format("{} {} {}", type, position, image)) {}
                    list_style(std::string_view position, std::string_view image) : super_property(std::format("{} {}", position, image)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view disc = "disc";
                    inline static constexpr std::string_view circle = "circle";
                    inline static constexpr std::string_view square = "square";
                    inline static constexpr std::string_view decimal = "decimal";
                    inline static constexpr std::string_view decimal_leading_zero = "decimal-leading-zero";
                    inline static constexpr std::string_view lower_alpha = "lower-alpha";
                    inline static constexpr std::string_view upper_alpha = "upper-alpha";
                    inline static constexpr std::string_view lower_greek = "lower-greek";
                    inline static constexpr std::string_view lower_latin = "lower-latin";
                    inline static constexpr std::string_view upper_latin = "upper-latin";
                    inline static constexpr std::string_view lower_roman = "lower-roman";
                    inline static constexpr std::string_view upper_roman = "upper-roman";
                    inline static constexpr std::string_view inside = "inside";
                    inline static constexpr std::string_view outside = "outside";
                };
            }
        }
    }
}
