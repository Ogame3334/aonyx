#pragma once

#include <string>
#include <format>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct border : types::property_base<"border">, constants::global_values<border>
                {
                    using super_property = types::property_base<"border">;

                    border() = delete;
                    border(std::string_view style) : super_property(std::string(style)) {}
                    border(std::string_view width, std::string_view style) : super_property(std::format("{} {}", width, style)) {}
                    border(std::string_view style, std::string_view color) : super_property(std::format("{} {}", style, color)) {}
                    border(util::numerical width, std::string_view style) : super_property(std::format("{} {}", width, style)) {}
                    border(std::string_view width, std::string_view style, std::string_view color) : super_property(std::format("{} {} {}", width, style, color)) {}
                    border(util::numerical width, std::string_view style, std::string_view color) : super_property(std::format("{} {} {}", width, style, color)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view hidden = "hidden";
                    inline static constexpr std::string_view dotted = "dotted";
                    inline static constexpr std::string_view dashed = "dashed";
                    inline static constexpr std::string_view solid = "solid";
                    inline static constexpr std::string_view double_ = "double";
                    inline static constexpr std::string_view groove = "groove";
                    inline static constexpr std::string_view ridge = "ridge";
                    inline static constexpr std::string_view inset = "inset";
                    inline static constexpr std::string_view outset = "outset";

                    inline static constexpr std::string_view thin = "thin";
                    inline static constexpr std::string_view medium = "medium";
                    inline static constexpr std::string_view thick = "thick";
                };
            }
        }
    }
}
