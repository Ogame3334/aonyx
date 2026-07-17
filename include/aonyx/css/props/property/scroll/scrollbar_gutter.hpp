/** @brief CSS property: scrollbar-gutter
 *
 * scrollbar-gutter CSS property.
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
                struct scrollbar_gutter : types::property_base<"scrollbar-gutter">, constants::global_values<scrollbar_gutter>
                {
                    using super_property = types::property_base<"scrollbar-gutter">;

                    scrollbar_gutter() = delete;
                    scrollbar_gutter(std::string_view v) : super_property(std::string(v)) {}
                    scrollbar_gutter(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr types::property_constant stable{key, "stable"};
                    inline static constexpr types::property_constant both_edges{key, "both-edges"};
                };
            }
        }
    }
}
