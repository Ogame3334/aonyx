/** @brief CSS property: overscroll-behavior
 *
 * overscroll-behavior CSS property.
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
                struct overscroll_behavior : types::property_base<"overscroll-behavior">, constants::global_values<overscroll_behavior>
                {
                    using super_property = types::property_base<"overscroll-behavior">;

                    overscroll_behavior() = delete;
                    overscroll_behavior(std::string_view v) : super_property(std::string(v)) {}
                    overscroll_behavior(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant contain{key, "contain"};
                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
