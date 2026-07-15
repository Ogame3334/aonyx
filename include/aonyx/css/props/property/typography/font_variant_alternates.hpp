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

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view stylistic = "stylistic";
                    inline static constexpr std::string_view styleset = "styleset";
                    inline static constexpr std::string_view character_variant = "character-variant";
                    inline static constexpr std::string_view swash = "swash";
                    inline static constexpr std::string_view ornaments = "ornaments";
                    inline static constexpr std::string_view annotation = "annotation";
                };
            }
        }
    }
}
