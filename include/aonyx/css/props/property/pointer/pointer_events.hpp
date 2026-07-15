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
                struct pointer_events : types::property_base<"pointer-events">, constants::global_values<pointer_events>
                {
                    using super_property = types::property_base<"pointer-events">;

                    pointer_events() = delete;
                    pointer_events(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view visible = "visible";
                    inline static constexpr std::string_view visible_paint = "visiblePainted";
                    inline static constexpr std::string_view visible_fill = "visibleFill";
                    inline static constexpr std::string_view visible_stroke = "visibleStroke";
                    inline static constexpr std::string_view painted = "painted";
                    inline static constexpr std::string_view fill = "fill";
                    inline static constexpr std::string_view stroke = "stroke";
                };
            }
        }
    }
}
