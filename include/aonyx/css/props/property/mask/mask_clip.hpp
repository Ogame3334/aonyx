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
                struct mask_clip : types::property_base<"mask-clip">, constants::global_values<mask_clip>
                {
                    using super_property = types::property_base<"mask-clip">;

                    mask_clip() = delete;
                    mask_clip(std::string_view v) : super_property(std::string(v)) {}
                    mask_clip(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view content_box = "content-box";
                    inline static constexpr std::string_view border_box = "border-box";
                    inline static constexpr std::string_view padding_box = "padding-box";
                    inline static constexpr std::string_view fill_box = "fill-box";
                    inline static constexpr std::string_view stroke_box = "stroke-box";
                    inline static constexpr std::string_view view_box = "view-box";
                    inline static constexpr std::string_view no_clip = "no-clip";
                };
            }
        }
    }
}
