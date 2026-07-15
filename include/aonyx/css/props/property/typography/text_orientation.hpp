#pragma once

#include <string>
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
                struct text_orientation : types::property_base<"text-orientation">, constants::global_values<text_orientation>
                {
                    using super_property = types::property_base<"text-orientation">;

                    text_orientation() = delete;
                    text_orientation(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view mixed = "mixed";
                    inline static constexpr std::string_view upright = "upright";
                    inline static constexpr std::string_view sideways = "sideways";
                    inline static constexpr std::string_view sideways_right = "sideways-right";
                };
            }
        }
    }
}
