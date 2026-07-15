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
                struct border_image_width : types::property_base<"border-image-width">, constants::global_values<border_image_width>
                {
                    using super_property = types::property_base<"border-image-width">;

                    border_image_width() = delete;
                    border_image_width(std::string_view width) : super_property(std::string(width)) {}
                    border_image_width(std::string_view top_bottom, std::string_view left_right) : super_property(std::format("{} {}", top_bottom, left_right)) {}
                    border_image_width(std::string_view top, std::string_view left_right, std::string_view bottom) : super_property(std::format("{} {} {}", top, left_right, bottom)) {}
                    border_image_width(std::string_view top, std::string_view right, std::string_view bottom, std::string_view left) : super_property(std::format("{} {} {} {}", top, right, bottom, left)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                };
            }
        }
    }
}
