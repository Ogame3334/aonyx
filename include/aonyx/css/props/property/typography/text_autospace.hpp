/** @brief CSS property: text-autospace
 *
 * text-autospace CSS property.
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
                struct text_autospace : types::property_base<"text-autospace">, constants::global_values<text_autospace>
                {
                    using super_property = types::property_base<"text-autospace">;

                    text_autospace() = delete;
                    text_autospace(std::string_view v) : super_property(std::string(v)) {}
                    text_autospace(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    text_autospace(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    text_autospace(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant ideograph_alpha{key, "ideograph-alpha"};
                    inline static constexpr types::property_constant ideograph_numeric{key, "ideograph-numeric"};
                    inline static constexpr types::property_constant punctuation{key, "punctuation"};
                    inline static constexpr types::property_constant no_autospace{key, "no-autospace"};
                };
            }
        }
    }
}
