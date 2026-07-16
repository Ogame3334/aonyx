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
                struct font_variant : types::property_base<"font-variant">, constants::global_values<font_variant>
                {
                    using super_property = types::property_base<"font-variant">;

                    font_variant() = delete;
                    font_variant(std::string_view v) : super_property(std::string(v)) {}
                    font_variant(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant small_caps{key, "small-caps"};
                };
            }
        }
    }
}
