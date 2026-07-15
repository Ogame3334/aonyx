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
                struct scroll_snap_stop : types::property_base<"scroll-snap-stop">, constants::global_values<scroll_snap_stop>
                {
                    using super_property = types::property_base<"scroll-snap-stop">;

                    scroll_snap_stop() = delete;
                    scroll_snap_stop(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view always = "always";
                };
            }
        }
    }
}
