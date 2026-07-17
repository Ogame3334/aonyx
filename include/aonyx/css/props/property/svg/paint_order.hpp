/** @brief CSS property: paint-order
 *
 * paint-order CSS property.
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
                struct paint_order : types::property_base<"paint-order">, constants::global_values<paint_order>
                {
                    using super_property = types::property_base<"paint-order">;

                    paint_order() = delete;
                    paint_order(std::string_view v) : super_property(std::string(v)) {}
                    paint_order(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    paint_order(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant fill{key, "fill"};
                    inline static constexpr types::property_constant stroke{key, "stroke"};
                    inline static constexpr types::property_constant markers{key, "markers"};
                };
            }
        }
    }
}
