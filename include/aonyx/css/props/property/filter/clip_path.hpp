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
                struct clip_path : types::property_base<"clip-path">, constants::global_values<clip_path>
                {
                    using super_property = types::property_base<"clip-path">;

                    clip_path() = delete;
                    clip_path(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
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
