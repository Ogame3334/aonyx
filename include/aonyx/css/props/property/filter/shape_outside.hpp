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
                struct shape_outside : types::property_base<"shape-outside">, constants::global_values<shape_outside>
                {
                    using super_property = types::property_base<"shape-outside">;

                    shape_outside() = delete;
                    shape_outside(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view margin_box = "margin-box";
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
