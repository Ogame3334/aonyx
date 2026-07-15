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

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view ideograph_alpha = "ideograph-alpha";
                    inline static constexpr std::string_view ideograph_numeric = "ideograph-numeric";
                    inline static constexpr std::string_view punctuation = "punctuation";
                    inline static constexpr std::string_view no_autospace = "no-autospace";
                };
            }
        }
    }
}
