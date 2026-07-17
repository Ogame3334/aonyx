/** @brief CSS property: font-palette
 *
 * font-palette CSS property.
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
                struct font_palette : types::property_base<"font-palette">, constants::global_values<font_palette>
                {
                    using super_property = types::property_base<"font-palette">;

                    font_palette() = delete;
                    font_palette(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant light{key, "light"};
                    inline static constexpr types::property_constant dark{key, "dark"};
                };
            }
        }
    }
}
