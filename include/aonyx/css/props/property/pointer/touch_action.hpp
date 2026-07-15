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
                struct touch_action : types::property_base<"touch-action">, constants::global_values<touch_action>
                {
                    using super_property = types::property_base<"touch-action">;

                    touch_action() = delete;
                    touch_action(std::string_view v) : super_property(std::string(v)) {}
                    touch_action(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view pan_x = "pan-x";
                    inline static constexpr std::string_view pan_y = "pan-y";
                    inline static constexpr std::string_view pan_left = "pan-left";
                    inline static constexpr std::string_view pan_right = "pan-right";
                    inline static constexpr std::string_view pan_up = "pan-up";
                    inline static constexpr std::string_view pan_down = "pan-down";
                    inline static constexpr std::string_view pinch_zoom = "pinch-zoom";
                    inline static constexpr std::string_view manipulation = "manipulation";
                };
            }
        }
    }
}
