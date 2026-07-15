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
                struct font_variant_numeric : types::property_base<"font-variant-numeric">, constants::global_values<font_variant_numeric>
                {
                    using super_property = types::property_base<"font-variant-numeric">;

                    font_variant_numeric() = delete;
                    font_variant_numeric(std::string_view v) : super_property(std::string(v)) {}
                    font_variant_numeric(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    font_variant_numeric(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    font_variant_numeric(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view ordinal = "ordinal";
                    inline static constexpr std::string_view slashed_zero = "slashed-zero";
                    inline static constexpr std::string_view lining_nums = "lining-nums";
                    inline static constexpr std::string_view oldstyle_nums = "oldstyle-nums";
                    inline static constexpr std::string_view proportional_nums = "proportional-nums";
                    inline static constexpr std::string_view tabular_nums = "tabular-nums";
                    inline static constexpr std::string_view diagonal_fractions = "diagonal-fractions";
                    inline static constexpr std::string_view stacked_fractions = "stacked-fractions";
                };
            }
        }
    }
}
