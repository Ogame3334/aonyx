/** @brief CSS property: scroll-timeline
 *
 * scroll-timeline CSS property.
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
                struct scroll_timeline : types::property_base<"scroll-timeline">, constants::global_values<scroll_timeline>
                {
                    using super_property = types::property_base<"scroll-timeline">;

                    scroll_timeline() = delete;
                    scroll_timeline(std::string_view v) : super_property(std::string(v)) {}
                    scroll_timeline(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                };
            }
        }
    }
}
