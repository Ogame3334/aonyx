/** @brief CSS property: font-variant-numeric
 *
 * font-variant-numeric CSS property.
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
                struct font_variant_numeric : types::property_base<"font-variant-numeric">, constants::global_values<font_variant_numeric>
                {
                    using super_property = types::property_base<"font-variant-numeric">;

                    font_variant_numeric() = delete;
                    font_variant_numeric(std::string_view v) : super_property(std::string(v)) {}
                    font_variant_numeric(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    font_variant_numeric(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    font_variant_numeric(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant ordinal{key, "ordinal"};
                    inline static constexpr types::property_constant slashed_zero{key, "slashed-zero"};
                    inline static constexpr types::property_constant lining_nums{key, "lining-nums"};
                    inline static constexpr types::property_constant oldstyle_nums{key, "oldstyle-nums"};
                    inline static constexpr types::property_constant proportional_nums{key, "proportional-nums"};
                    inline static constexpr types::property_constant tabular_nums{key, "tabular-nums"};
                    inline static constexpr types::property_constant diagonal_fractions{key, "diagonal-fractions"};
                    inline static constexpr types::property_constant stacked_fractions{key, "stacked-fractions"};
                };
            }
        }
    }
}
