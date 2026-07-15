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
                struct mask_origin : types::property_base<"mask-origin">, constants::global_values<mask_origin>
                {
                    using super_property = types::property_base<"mask-origin">;

                    mask_origin() = delete;
                    mask_origin(std::string_view v) : super_property(std::string(v)) {}
                    mask_origin(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view content_box = "content-box";
                    inline static constexpr std::string_view border_box = "border-box";
                    inline static constexpr std::string_view padding_box = "padding-box";
                    inline static constexpr std::string_view fill_box = "fill-box";
                    inline static constexpr std::string_view stroke_box = "stroke-box";
                    inline static constexpr std::string_view view_box = "view-box";
                };
            }
        }
    }
}
