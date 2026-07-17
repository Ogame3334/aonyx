/** @brief CSS property: page-break-inside
 *
 * page-break-inside CSS property.
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
                struct page_break_inside : types::property_base<"page-break-inside">, constants::global_values<page_break_inside>
                {
                    using super_property = types::property_base<"page-break-inside">;

                    page_break_inside() = delete;
                    page_break_inside(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant avoid{key, "avoid"};
                };
            }
        }
    }
}
