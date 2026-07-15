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
                struct font_variant_emoji : types::property_base<"font-variant-emoji">, constants::global_values<font_variant_emoji>
                {
                    using super_property = types::property_base<"font-variant-emoji">;

                    font_variant_emoji() = delete;
                    font_variant_emoji(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view text = "text";
                    inline static constexpr std::string_view emoji = "emoji";
                    inline static constexpr std::string_view unicode = "unicode";
                };
            }
        }
    }
}
