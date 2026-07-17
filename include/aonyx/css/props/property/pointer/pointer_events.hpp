/** @brief CSS property: pointer-events
 *
 * pointer-events CSS property.
 */
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

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant visible{key, "visible"};
                    inline static constexpr types::property_constant visible_paint{key, "visiblePainted"};
                    inline static constexpr types::property_constant visible_fill{key, "visibleFill"};
                    inline static constexpr types::property_constant visible_stroke{key, "visibleStroke"};
                    inline static constexpr types::property_constant painted{key, "painted"};
                    inline static constexpr types::property_constant fill{key, "fill"};
                    inline static constexpr types::property_constant stroke{key, "stroke"};
                };
            }
        }
    }
}
