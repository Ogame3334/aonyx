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
                struct animation_timeline : types::property_base<"animation-timeline">, constants::global_values<animation_timeline>
                {
                    using super_property = types::property_base<"animation-timeline">;

                    animation_timeline() = delete;
                    animation_timeline(std::string_view v) : super_property(std::string(v)) {}
                    animation_timeline(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view scroll = "scroll";
                    inline static constexpr std::string_view view = "view";
                };
            }
        }
    }
}
