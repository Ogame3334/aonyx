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
                struct position_area : types::property_base<"position-area">, constants::global_values<position_area>
                {
                    using super_property = types::property_base<"position-area">;

                    position_area() = delete;
                    position_area(std::string_view v) : super_property(std::string(v)) {}
                    position_area(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    position_area(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view all = "all";
                    inline static constexpr std::string_view top = "top";
                    inline static constexpr std::string_view right = "right";
                    inline static constexpr std::string_view bottom = "bottom";
                    inline static constexpr std::string_view left = "left";
                    inline static constexpr std::string_view center = "center";
                    inline static constexpr std::string_view span_top = "span-top";
                    inline static constexpr std::string_view span_right = "span-right";
                    inline static constexpr std::string_view span_bottom = "span-bottom";
                    inline static constexpr std::string_view span_left = "span-left";
                    inline static constexpr std::string_view span_all = "span-all";
                    inline static constexpr std::string_view x = "x";
                    inline static constexpr std::string_view y = "y";
                    inline static constexpr std::string_view span_x = "span-x";
                    inline static constexpr std::string_view span_y = "span-y";
                    inline static constexpr std::string_view block = "block";
                    inline static constexpr std::string_view span_block = "span-block";
                    inline static constexpr std::string_view inline_ = "inline";
                    inline static constexpr std::string_view span_inline = "span-inline";
                };
            }
        }
    }
}
