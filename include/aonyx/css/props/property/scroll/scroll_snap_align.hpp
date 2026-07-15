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
                struct scroll_snap_align : types::property_base<"scroll-snap-align">, constants::global_values<scroll_snap_align>
                {
                    using super_property = types::property_base<"scroll-snap-align">;

                    scroll_snap_align() = delete;
                    scroll_snap_align(std::string_view v) : super_property(std::string(v)) {}
                    scroll_snap_align(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view start = "start";
                    inline static constexpr std::string_view end = "end";
                    inline static constexpr std::string_view center = "center";
                };
            }
        }
    }
}
