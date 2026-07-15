#pragma once

#include <string>
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
                struct list_style_type : types::property_base<"list-style-type">, constants::global_values<list_style_type>
                {
                    using super_property = types::property_base<"list-style-type">;

                    list_style_type() = delete;
                    list_style_type(std::string_view v) : super_property(std::string(v)) {}

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
                    inline static constexpr std::string_view disclosure_open = "disclosure-open";
                    inline static constexpr std::string_view disclosure_closed = "disclosure-closed";
                };
            }
        }
    }
}
