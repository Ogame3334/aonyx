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
                struct image_orientation : types::property_base<"image-orientation">, constants::global_values<image_orientation>
                {
                    using super_property = types::property_base<"image-orientation">;

                    image_orientation() = delete;
                    image_orientation(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view from_image = "from-image";
                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view flip = "flip";
                };
            }
        }
    }
}
