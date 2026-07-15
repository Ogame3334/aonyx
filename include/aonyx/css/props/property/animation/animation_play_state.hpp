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
                struct animation_play_state : types::property_base<"animation-play-state">, constants::global_values<animation_play_state>
                {
                    using super_property = types::property_base<"animation-play-state">;

                    animation_play_state() = delete;
                    animation_play_state(std::string_view v) : super_property(std::string(v)) {}
                    animation_play_state(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view running = "running";
                    inline static constexpr std::string_view paused = "paused";
                };
            }
        }
    }
}
