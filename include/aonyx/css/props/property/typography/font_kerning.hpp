/** @brief CSS property: font-kerning
 *
 * font-kerning CSS property.
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
                struct font_kerning : types::property_base<"font-kerning">, constants::global_values<font_kerning>
                {
                    using super_property = types::property_base<"font-kerning">;

                    font_kerning() = delete;
                    font_kerning(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
