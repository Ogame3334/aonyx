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
                struct text_box : types::property_base<"text-box">, constants::global_values<text_box>
                {
                    using super_property = types::property_base<"text-box">;

                    text_box() = delete;
                    text_box(std::string_view trim) : super_property(std::string(trim)) {}
                    text_box(std::string_view trim, std::string_view edge) : super_property(std::format("{} {}", trim, edge)) {}
                    text_box(std::string_view trim, std::string_view over, std::string_view under) : super_property(std::format("{} {} {}", trim, over, under)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view trim = "trim";
                    inline static constexpr std::string_view cap = "cap";
                    inline static constexpr std::string_view ex = "ex";
                    inline static constexpr std::string_view alphabetic = "alphabetic";
                    inline static constexpr std::string_view text = "text";
                };
            }
        }
    }
}
