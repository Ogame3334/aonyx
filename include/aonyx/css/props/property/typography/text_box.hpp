/** @brief CSS property: text-box
 *
 * text-box CSS property.
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
                struct text_box : types::property_base<"text-box">, constants::global_values<text_box>
                {
                    using super_property = types::property_base<"text-box">;

                    text_box() = delete;
                    text_box(std::string_view trim) : super_property(std::string(trim)) {}
                    text_box(std::string_view trim, std::string_view edge) : super_property(std::format("{} {}", trim, edge)) {}
                    text_box(std::string_view trim, std::string_view over, std::string_view under) : super_property(std::format("{} {} {}", trim, over, under)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant trim{key, "trim"};
                    inline static constexpr types::property_constant cap{key, "cap"};
                    inline static constexpr types::property_constant ex{key, "ex"};
                    inline static constexpr types::property_constant alphabetic{key, "alphabetic"};
                    inline static constexpr types::property_constant text{key, "text"};
                };
            }
        }
    }
}
