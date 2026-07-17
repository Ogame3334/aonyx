/** @brief CSS property: text-emphasis
 *
 * text-emphasis CSS property.
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
                struct text_emphasis : types::property_base<"text-emphasis">, constants::global_values<text_emphasis>
                {
                    using super_property = types::property_base<"text-emphasis">;

                    text_emphasis() = delete;
                    text_emphasis(std::string_view style) : super_property(std::string(style)) {}
                    text_emphasis(std::string_view style, std::string_view color) : super_property(std::format("{} {}", style, color)) {}
                    text_emphasis(std::string_view style, std::string_view color, std::string_view shape) : super_property(std::format("{} {} {}", style, color, shape)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant filled{key, "filled"};
                    inline static constexpr types::property_constant open{key, "open"};
                    inline static constexpr types::property_constant dot{key, "dot"};
                    inline static constexpr types::property_constant circle{key, "circle"};
                    inline static constexpr types::property_constant double_circle{key, "double-circle"};
                    inline static constexpr types::property_constant triangle{key, "triangle"};
                    inline static constexpr types::property_constant sesame{key, "sesame"};
                };
            }
        }
    }
}
