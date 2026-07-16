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

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant x{key, "x"};
                    inline static constexpr types::property_constant y{key, "y"};
                    inline static constexpr types::property_constant block{key, "block"};
                    inline static constexpr types::property_constant inline_{key, "inline"};
                    inline static constexpr types::property_constant both{key, "both"};
                    inline static constexpr types::property_constant mandatory{key, "mandatory"};
                    inline static constexpr types::property_constant proximity{key, "proximity"};
                };
            }
        }
    }
}
