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
                struct mask_position_x : types::property_base<"mask-position-x">, constants::global_values<mask_position_x>
                {
                    using super_property = types::property_base<"mask-position-x">;

                    mask_position_x() = delete;
                    mask_position_x(std::string_view v) : super_property(std::string(v)) {}
                    mask_position_x(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    mask_position_x(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr std::string_view left = "left";
                    inline static constexpr std::string_view center = "center";
                    inline static constexpr std::string_view right = "right";
                };
            }
        }
    }
}
