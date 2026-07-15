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
                struct font_kerning : types::property_base<"font-kerning">, constants::global_values<font_kerning>
                {
                    using super_property = types::property_base<"font-kerning">;

                    font_kerning() = delete;
                    font_kerning(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
