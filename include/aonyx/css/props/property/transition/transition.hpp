/** @brief CSS property: transition
 *
 * transition CSS property.
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
                struct transition : types::property_base<"transition">, constants::global_values<transition>
                {
                    using super_property = types::property_base<"transition">;

                    transition() = delete;
                    transition(std::string_view v) : super_property(std::string(v)) {}
                    transition(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}
                    transition(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{}, {}, {}", v1, v2, v3)) {}
                    transition(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{}, {}, {}, {}", v1, v2, v3, v4)) {}
                };
            }
        }
    }
}
