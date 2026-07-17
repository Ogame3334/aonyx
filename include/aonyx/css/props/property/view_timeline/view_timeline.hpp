/** @brief CSS property: view-timeline
 *
 * view-timeline CSS property.
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
                struct view_timeline : types::property_base<"view-timeline">, constants::global_values<view_timeline>
                {
                    using super_property = types::property_base<"view-timeline">;

                    view_timeline() = delete;
                    view_timeline(std::string_view v) : super_property(std::string(v)) {}
                    view_timeline(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    view_timeline(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}
                };
            }
        }
    }
}
