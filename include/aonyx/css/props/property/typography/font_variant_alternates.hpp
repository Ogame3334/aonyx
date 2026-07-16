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
                struct font_variant_alternates : types::property_base<"font-variant-alternates">, constants::global_values<font_variant_alternates>
                {
                    using super_property = types::property_base<"font-variant-alternates">;

                    font_variant_alternates() = delete;
                    font_variant_alternates(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant stylistic{key, "stylistic"};
                    inline static constexpr types::property_constant styleset{key, "styleset"};
                    inline static constexpr types::property_constant character_variant{key, "character-variant"};
                    inline static constexpr types::property_constant swash{key, "swash"};
                    inline static constexpr types::property_constant ornaments{key, "ornaments"};
                    inline static constexpr types::property_constant annotation{key, "annotation"};
                };
            }
        }
    }
}
