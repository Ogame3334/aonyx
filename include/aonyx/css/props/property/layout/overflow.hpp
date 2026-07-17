/** @brief CSS property: overflow
 *
 * overflow CSS property.
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
                struct overflow : types::property_base<"overflow">, constants::global_values<overflow>
                {
                    using super_property = types::property_base<"overflow">;

                    overflow() = delete;
                    overflow(std::string_view v) : super_property(std::string(v)) {}
                    overflow(std::string_view x, std::string_view y) : super_property(std::format("{} {}", x, y)) {}

                    inline static constexpr types::property_constant visible{key, "visible"};
                    inline static constexpr types::property_constant hidden{key, "hidden"};
                    inline static constexpr types::property_constant clip{key, "clip"};
                    inline static constexpr types::property_constant scroll{key, "scroll"};
                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
