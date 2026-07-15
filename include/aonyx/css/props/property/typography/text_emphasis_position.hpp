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
                struct text_emphasis_position : types::property_base<"text-emphasis-position">, constants::global_values<text_emphasis_position>
                {
                    using super_property = types::property_base<"text-emphasis-position">;

                    text_emphasis_position() = delete;
                    text_emphasis_position(std::string_view over_under, std::string_view left_right) : super_property(std::format("{} {}", over_under, left_right)) {}

                    inline static constexpr std::string_view over = "over";
                    inline static constexpr std::string_view under = "under";
                    inline static constexpr std::string_view right = "right";
                    inline static constexpr std::string_view left = "left";
                };
            }
        }
    }
}
