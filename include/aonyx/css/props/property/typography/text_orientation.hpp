/** @brief CSS property: text-orientation
 *
 * text-orientation CSS property.
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
                struct text_orientation : types::property_base<"text-orientation">, constants::global_values<text_orientation>
                {
                    using super_property = types::property_base<"text-orientation">;

                    text_orientation() = delete;
                    text_orientation(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant mixed{key, "mixed"};
                    inline static constexpr types::property_constant upright{key, "upright"};
                    inline static constexpr types::property_constant sideways{key, "sideways"};
                    inline static constexpr types::property_constant sideways_right{key, "sideways-right"};
                };
            }
        }
    }
}
