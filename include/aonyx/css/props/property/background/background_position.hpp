/** @brief CSS property: background-position
 *
 * background-position CSS property.
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
                struct background_position : types::property_base<"background-position">, constants::global_values<background_position>
                {
                    using super_property = types::property_base<"background-position">;

                    background_position() = delete;
                    background_position(std::string_view v) : super_property(std::string(v)) {}
                    background_position(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    background_position(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    background_position(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr types::property_constant left{key, "left"};
                    inline static constexpr types::property_constant center{key, "center"};
                    inline static constexpr types::property_constant right{key, "right"};
                    inline static constexpr types::property_constant top{key, "top"};
                    inline static constexpr types::property_constant bottom{key, "bottom"};
                };
            }
        }
    }
}
