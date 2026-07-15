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
                struct background_position_y : types::property_base<"background-position-y">, constants::global_values<background_position_y>
                {
                    using super_property = types::property_base<"background-position-y">;

                    background_position_y() = delete;
                    background_position_y(std::string_view v) : super_property(std::string(v)) {}
                    background_position_y(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr std::string_view top = "top";
                    inline static constexpr std::string_view center = "center";
                    inline static constexpr std::string_view bottom = "bottom";
                    inline static constexpr std::string_view y_start = "y-start";
                    inline static constexpr std::string_view y_end = "y-end";
                };
            }
        }
    }
}
