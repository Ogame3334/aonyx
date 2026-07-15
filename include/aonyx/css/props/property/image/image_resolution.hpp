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
                struct image_resolution : types::property_base<"image-resolution">, constants::global_values<image_resolution>
                {
                    using super_property = types::property_base<"image-resolution">;

                    image_resolution() = delete;
                    image_resolution(std::string_view v) : super_property(std::string(v)) {}
                    image_resolution(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr std::string_view from_image = "from-image";
                    inline static constexpr std::string_view snap = "snap";
                };
            }
        }
    }
}
