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
                struct color_scheme : types::property_base<"color-scheme">, constants::global_values<color_scheme>
                {
                    using super_property = types::property_base<"color-scheme">;

                    color_scheme() = delete;
                    color_scheme(std::string_view v) : super_property(std::string(v)) {}
                    color_scheme(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view light = "light";
                    inline static constexpr std::string_view dark = "dark";
                    inline static constexpr std::string_view only = "only";
                };
            }
        }
    }
}
