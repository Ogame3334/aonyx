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

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant small_caps{key, "small-caps"};
                    inline static constexpr types::property_constant all_small_caps{key, "all-small-caps"};
                    inline static constexpr types::property_constant petite_caps{key, "petite-caps"};
                    inline static constexpr types::property_constant all_petite_caps{key, "all-petite-caps"};
                    inline static constexpr types::property_constant unicase{key, "unicase"};
                    inline static constexpr types::property_constant titling_caps{key, "titling-caps"};
                };
            }
        }
    }
}
