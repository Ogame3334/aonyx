/** @brief CSS property: page-break-before
 *
 * page-break-before CSS property.
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
                struct page_break_before : types::property_base<"page-break-before">, constants::global_values<page_break_before>
                {
                    using super_property = types::property_base<"page-break-before">;

                    page_break_before() = delete;
                    page_break_before(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant always{key, "always"};
                    inline static constexpr types::property_constant avoid{key, "avoid"};
                    inline static constexpr types::property_constant left{key, "left"};
                    inline static constexpr types::property_constant right{key, "right"};
                    inline static constexpr types::property_constant recto{key, "recto"};
                    inline static constexpr types::property_constant verso{key, "verso"};
                };
            }
        }
    }
}
