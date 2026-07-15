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
                struct background_repeat : types::property_base<"background-repeat">, constants::global_values<background_repeat>
                {
                    using super_property = types::property_base<"background-repeat">;

                    background_repeat() = delete;
                    background_repeat(std::string_view v) : super_property(std::string(v)) {}
                    background_repeat(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    background_repeat(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr std::string_view repeat = "repeat";
                    inline static constexpr std::string_view repeat_x = "repeat-x";
                    inline static constexpr std::string_view repeat_y = "repeat-y";
                    inline static constexpr std::string_view no_repeat = "no-repeat";
                    inline static constexpr std::string_view space = "space";
                    inline static constexpr std::string_view round = "round";
                };
            }
        }
    }
}
