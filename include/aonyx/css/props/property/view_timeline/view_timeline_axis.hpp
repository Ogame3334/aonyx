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
                struct view_timeline_axis : types::property_base<"view-timeline-axis">, constants::global_values<view_timeline_axis>
                {
                    using super_property = types::property_base<"view-timeline-axis">;

                    view_timeline_axis() = delete;
                    view_timeline_axis(std::string_view v) : super_property(std::string(v)) {}
                    view_timeline_axis(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view block = "block";
                    inline static constexpr std::string_view inline_ = "inline";
                    inline static constexpr std::string_view x = "x";
                    inline static constexpr std::string_view y = "y";
                };
            }
        }
    }
}
