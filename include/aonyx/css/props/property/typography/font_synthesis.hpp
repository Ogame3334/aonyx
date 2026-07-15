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
                struct font_synthesis : types::property_base<"font-synthesis">, constants::global_values<font_synthesis>
                {
                    using super_property = types::property_base<"font-synthesis">;

                    font_synthesis() = delete;
                    font_synthesis(std::string_view v) : super_property(std::string(v)) {}
                    font_synthesis(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    font_synthesis(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view weight = "weight";
                    inline static constexpr std::string_view style = "style";
                    inline static constexpr std::string_view small_caps = "small-caps";
                };
            }
        }
    }
}
