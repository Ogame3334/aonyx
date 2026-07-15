#pragma once

#include <string>
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
                struct font_variant_caps : types::property_base<"font-variant-caps">, constants::global_values<font_variant_caps>
                {
                    using super_property = types::property_base<"font-variant-caps">;

                    font_variant_caps() = delete;
                    font_variant_caps(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view small_caps = "small-caps";
                    inline static constexpr std::string_view all_small_caps = "all-small-caps";
                    inline static constexpr std::string_view petite_caps = "petite-caps";
                    inline static constexpr std::string_view all_petite_caps = "all-petite-caps";
                    inline static constexpr std::string_view unicase = "unicase";
                    inline static constexpr std::string_view titling_caps = "titling-caps";
                };
            }
        }
    }
}
