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
                struct font_palette : types::property_base<"font-palette">, constants::global_values<font_palette>
                {
                    using super_property = types::property_base<"font-palette">;

                    font_palette() = delete;
                    font_palette(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view light = "light";
                    inline static constexpr std::string_view dark = "dark";
                };
            }
        }
    }
}
