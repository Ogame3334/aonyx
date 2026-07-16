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
                struct border_image_repeat : types::property_base<"border-image-repeat">, constants::global_values<border_image_repeat>
                {
                    using super_property = types::property_base<"border-image-repeat">;

                    border_image_repeat() = delete;
                    border_image_repeat(std::string_view repeat) : super_property(std::string(repeat)) {}
                    border_image_repeat(std::string_view horizontal, std::string_view vertical) : super_property(std::format("{} {}", horizontal, vertical)) {}

                    inline static constexpr types::property_constant stretch{key, "stretch"};
                    inline static constexpr types::property_constant repeat{key, "repeat"};
                    inline static constexpr types::property_constant round{key, "round"};
                    inline static constexpr types::property_constant space{key, "space"};
                };
            }
        }
    }
}
