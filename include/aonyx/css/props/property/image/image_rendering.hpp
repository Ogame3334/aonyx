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
                struct image_rendering : types::property_base<"image-rendering">, constants::global_values<image_rendering>
                {
                    using super_property = types::property_base<"image-rendering">;

                    image_rendering() = delete;
                    image_rendering(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view smooth = "smooth";
                    inline static constexpr std::string_view high_quality = "high-quality";
                    inline static constexpr std::string_view crisp_edges = "crisp-edges";
                    inline static constexpr std::string_view pixelated = "pixelated";
                };
            }
        }
    }
}
