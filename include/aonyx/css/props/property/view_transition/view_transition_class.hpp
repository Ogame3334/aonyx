/** @brief CSS property: view-transition-class
 *
 * view-transition-class CSS property.
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
                struct view_transition_class : types::property_base<"view-transition-class">, constants::global_values<view_transition_class>
                {
                    using super_property = types::property_base<"view-transition-class">;

                    view_transition_class() = delete;
                    view_transition_class(std::string_view v) : super_property(std::string(v)) {}
                    view_transition_class(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
