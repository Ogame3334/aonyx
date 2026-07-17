/** @brief CSS property: font-style
 *
 * font-style CSS property.
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
                struct font_style : types::property_base<"font-style">, constants::global_values<font_style>
                {
                    using super_property = types::property_base<"font-style">;

                    font_style() = delete;
                    font_style(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant italic{key, "italic"};
                    inline static constexpr types::property_constant oblique{key, "oblique"};
                };
            }
        }
    }
}
