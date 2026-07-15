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
                struct scroll_snap_type : types::property_base<"scroll-snap-type">, constants::global_values<scroll_snap_type>
                {
                    using super_property = types::property_base<"scroll-snap-type">;

                    scroll_snap_type() = delete;
                    scroll_snap_type(std::string_view v) : super_property(std::string(v)) {}
                    scroll_snap_type(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view x = "x";
                    inline static constexpr std::string_view y = "y";
                    inline static constexpr std::string_view block = "block";
                    inline static constexpr std::string_view inline_ = "inline";
                    inline static constexpr std::string_view both = "both";
                    inline static constexpr std::string_view mandatory = "mandatory";
                    inline static constexpr std::string_view proximity = "proximity";
                };
            }
        }
    }
}
