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
                struct font_variant_position : types::property_base<"font-variant-position">, constants::global_values<font_variant_position>
                {
                    using super_property = types::property_base<"font-variant-position">;

                    font_variant_position() = delete;
                    font_variant_position(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view sub = "sub";
                    inline static constexpr std::string_view super = "super";
                };
            }
        }
    }
}
