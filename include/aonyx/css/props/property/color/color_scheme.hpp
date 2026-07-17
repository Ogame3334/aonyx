/** @brief CSS property: color-scheme
 *
 * color-scheme CSS property.
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
                struct color_scheme : types::property_base<"color-scheme">, constants::global_values<color_scheme>
                {
                    using super_property = types::property_base<"color-scheme">;

                    color_scheme() = delete;
                    color_scheme(std::string_view v) : super_property(std::string(v)) {}
                    color_scheme(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant light{key, "light"};
                    inline static constexpr types::property_constant dark{key, "dark"};
                    inline static constexpr types::property_constant only{key, "only"};
                };
            }
        }
    }
}
