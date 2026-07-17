/** @brief CSS property: list-style-position
 *
 * list-style-position CSS property.
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
                struct list_style_position : types::property_base<"list-style-position">, constants::global_values<list_style_position>
                {
                    using super_property = types::property_base<"list-style-position">;

                    list_style_position() = delete;
                    list_style_position(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant inside{key, "inside"};
                    inline static constexpr types::property_constant outside{key, "outside"};
                };
            }
        }
    }
}
