/** @brief CSS property: transition-property
 *
 * transition-property CSS property.
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
                struct transition_property : types::property_base<"transition-property">, constants::global_values<transition_property>
                {
                    using super_property = types::property_base<"transition-property">;

                    transition_property() = delete;
                    transition_property(std::string_view v) : super_property(std::string(v)) {}
                    transition_property(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}
                    transition_property(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{}, {}, {}", v1, v2, v3)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant all{key, "all"};
                };
            }
        }
    }
}
