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
                struct text_underline_position : types::property_base<"text-underline-position">, constants::global_values<text_underline_position>
                {
                    using super_property = types::property_base<"text-underline-position">;

                    text_underline_position() = delete;
                    text_underline_position(std::string_view v) : super_property(std::string(v)) {}
                    text_underline_position(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view under = "under";
                    inline static constexpr std::string_view left = "left";
                    inline static constexpr std::string_view right = "right";
                    inline static constexpr std::string_view under_left = "under left";
                    inline static constexpr std::string_view under_right = "under right";
                    inline static constexpr std::string_view from_font = "from-font";
                };
            }
        }
    }
}
