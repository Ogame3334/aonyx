/** @brief CSS property: background-repeat-y
 *
 * background-repeat-y CSS property.
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
                struct background_repeat_y : types::property_base<"background-repeat-y">, constants::global_values<background_repeat_y>
                {
                    using super_property = types::property_base<"background-repeat-y">;

                    background_repeat_y() = delete;
                    background_repeat_y(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant repeat{key, "repeat"};
                    inline static constexpr types::property_constant no_repeat{key, "no-repeat"};
                    inline static constexpr types::property_constant space{key, "space"};
                    inline static constexpr types::property_constant round{key, "round"};
                };
            }
        }
    }
}
