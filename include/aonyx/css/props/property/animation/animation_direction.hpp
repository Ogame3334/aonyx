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
                struct animation_direction : types::property_base<"animation-direction">, constants::global_values<animation_direction>
                {
                    using super_property = types::property_base<"animation-direction">;

                    animation_direction() = delete;
                    animation_direction(std::string_view v) : super_property(std::string(v)) {}
                    animation_direction(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view reverse = "reverse";
                    inline static constexpr std::string_view alternate = "alternate";
                    inline static constexpr std::string_view alternate_reverse = "alternate-reverse";
                };
            }
        }
    }
}
