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
                struct text_decoration_style : types::property_base<"text-decoration-style">, constants::global_values<text_decoration_style>
                {
                    using super_property = types::property_base<"text-decoration-style">;

                    text_decoration_style() = delete;
                    text_decoration_style(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view solid = "solid";
                    inline static constexpr std::string_view double_ = "double";
                    inline static constexpr std::string_view dotted = "dotted";
                    inline static constexpr std::string_view dashed = "dashed";
                    inline static constexpr std::string_view wavy = "wavy";
                };
            }
        }
    }
}
