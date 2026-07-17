/** @brief CSS property: caret-animation
 *
 * caret-animation CSS property.
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
                struct caret_animation : types::property_base<"caret-animation">, constants::global_values<caret_animation>
                {
                    using super_property = types::property_base<"caret-animation">;

                    caret_animation() = delete;
                    caret_animation(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant blink{key, "blink"};
                    inline static constexpr types::property_constant steady{key, "steady"};
                };
            }
        }
    }
}
