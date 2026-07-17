/** @brief CSS property: scrollbar-color
 *
 * scrollbar-color CSS property.
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
                struct scrollbar_color : types::property_base<"scrollbar-color">, constants::global_values<scrollbar_color>
                {
                    using super_property = types::property_base<"scrollbar-color">;

                    scrollbar_color() = delete;
                    scrollbar_color(std::string_view v) : super_property(std::string(v)) {}
                    scrollbar_color(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
