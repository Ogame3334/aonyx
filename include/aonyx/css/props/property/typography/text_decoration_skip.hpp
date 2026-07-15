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
                struct text_decoration_skip : types::property_base<"text-decoration-skip">, constants::global_values<text_decoration_skip>
                {
                    using super_property = types::property_base<"text-decoration-skip">;

                    text_decoration_skip() = delete;
                    text_decoration_skip(std::string_view v) : super_property(std::string(v)) {}
                    text_decoration_skip(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    text_decoration_skip(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    text_decoration_skip(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}
                    text_decoration_skip(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4, std::string_view v5) : super_property(std::format("{} {} {} {} {}", v1, v2, v3, v4, v5)) {}
                    text_decoration_skip(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4, std::string_view v5, std::string_view v6) : super_property(std::format("{} {} {} {} {} {}", v1, v2, v3, v4, v5, v6)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view objects = "objects";
                    inline static constexpr std::string_view edges = "edges";
                    inline static constexpr std::string_view box_decoration = "box-decoration";
                    inline static constexpr std::string_view leading_whitespace = "leading-spaces";
                    inline static constexpr std::string_view trailing_whitespace = "trailing-spaces";
                    inline static constexpr std::string_view content = "content";
                };
            }
        }
    }
}
