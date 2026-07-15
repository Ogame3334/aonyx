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
                struct text_decoration_inset : types::property_base<"text-decoration-inset">, constants::global_values<text_decoration_inset>
                {
                    using super_property = types::property_base<"text-decoration-inset">;

                    text_decoration_inset() = delete;
                    text_decoration_inset(std::string_view v) : super_property(std::string(v)) {}
                    text_decoration_inset(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    text_decoration_inset(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    text_decoration_inset(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view leading = "leading";
                    inline static constexpr std::string_view text = "text";
                    inline static constexpr std::string_view edges = "edges";
                    inline static constexpr std::string_view box_decoration = "box-decoration";
                };
            }
        }
    }
}
