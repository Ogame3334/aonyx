/** @brief CSS property: mask-border
 *
 * mask-border CSS property.
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
                struct mask_border : types::property_base<"mask-border">, constants::global_values<mask_border>
                {
                    using super_property = types::property_base<"mask-border">;

                    mask_border() = delete;
                    mask_border(std::string_view v) : super_property(std::string(v)) {}
                    mask_border(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    mask_border(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    mask_border(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant repeat{key, "repeat"};
                    inline static constexpr types::property_constant stretch{key, "stretch"};
                    inline static constexpr types::property_constant round{key, "round"};
                    inline static constexpr types::property_constant space{key, "space"};
                };
            }
        }
    }
}
