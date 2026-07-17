/** @brief CSS property: animation-timeline
 *
 * animation-timeline CSS property.
 */
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
                struct animation_timeline : types::property_base<"animation-timeline">, constants::global_values<animation_timeline>
                {
                    using super_property = types::property_base<"animation-timeline">;

                    animation_timeline() = delete;
                    animation_timeline(std::string_view v) : super_property(std::string(v)) {}
                    animation_timeline(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant scroll{key, "scroll"};
                    inline static constexpr types::property_constant view{key, "view"};
                };
            }
        }
    }
}
