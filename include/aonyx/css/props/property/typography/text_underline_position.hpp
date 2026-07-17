/** @brief CSS property: text-underline-position
 *
 * text-underline-position CSS property.
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
                struct text_underline_position : types::property_base<"text-underline-position">, constants::global_values<text_underline_position>
                {
                    using super_property = types::property_base<"text-underline-position">;

                    text_underline_position() = delete;
                    text_underline_position(std::string_view v) : super_property(std::string(v)) {}
                    text_underline_position(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant under{key, "under"};
                    inline static constexpr types::property_constant left{key, "left"};
                    inline static constexpr types::property_constant right{key, "right"};
                    inline static constexpr types::property_constant under_left{key, "under left"};
                    inline static constexpr types::property_constant under_right{key, "under right"};
                    inline static constexpr types::property_constant from_font{key, "from-font"};
                };
            }
        }
    }
}
