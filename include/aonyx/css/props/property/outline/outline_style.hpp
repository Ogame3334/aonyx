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
                struct outline_style : types::property_base<"outline-style">, constants::global_values<outline_style>
                {
                    using super_property = types::property_base<"outline-style">;

                    outline_style() = delete;
                    outline_style(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view dotted = "dotted";
                    inline static constexpr std::string_view dashed = "dashed";
                    inline static constexpr std::string_view solid = "solid";
                    inline static constexpr std::string_view double_ = "double";
                    inline static constexpr std::string_view groove = "groove";
                    inline static constexpr std::string_view ridge = "ridge";
                    inline static constexpr std::string_view inset = "inset";
                    inline static constexpr std::string_view outset = "outset";
                };
            }
        }
    }
}
