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
                struct animation_timing_function : types::property_base<"animation-timing-function">, constants::global_values<animation_timing_function>
                {
                    using super_property = types::property_base<"animation-timing-function">;

                    animation_timing_function() = delete;
                    animation_timing_function(std::string_view v) : super_property(std::string(v)) {}
                    animation_timing_function(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view ease = "ease";
                    inline static constexpr std::string_view linear = "linear";
                    inline static constexpr std::string_view ease_in = "ease-in";
                    inline static constexpr std::string_view ease_out = "ease-out";
                    inline static constexpr std::string_view ease_in_out = "ease-in-out";
                    inline static constexpr std::string_view step_start = "step-start";
                    inline static constexpr std::string_view step_end = "step-end";
                };
            }
        }
    }
}
