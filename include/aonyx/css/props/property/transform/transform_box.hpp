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
                struct transform_box : types::property_base<"transform-box">, constants::global_values<transform_box>
                {
                    using super_property = types::property_base<"transform-box">;

                    transform_box() = delete;
                    transform_box(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view content_box = "content-box";
                    inline static constexpr std::string_view border_box = "border-box";
                    inline static constexpr std::string_view fill_box = "fill-box";
                    inline static constexpr std::string_view stroke_box = "stroke-box";
                    inline static constexpr std::string_view view_box = "view-box";
                };
            }
        }
    }
}
