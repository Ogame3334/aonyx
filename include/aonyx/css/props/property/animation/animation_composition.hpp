/** @brief CSS property: animation-composition
 *
 * animation-composition CSS property.
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
                struct animation_composition : types::property_base<"animation-composition">, constants::global_values<animation_composition>
                {
                    using super_property = types::property_base<"animation-composition">;

                    animation_composition() = delete;
                    animation_composition(std::string_view v) : super_property(std::string(v)) {}
                    animation_composition(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr types::property_constant replace{key, "replace"};
                    inline static constexpr types::property_constant add{key, "add"};
                    inline static constexpr types::property_constant accumulate{key, "accumulate"};
                };
            }
        }
    }
}
