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
                struct text_decoration : types::property_base<"text-decoration">, constants::global_values<text_decoration>
                {
                    using super_property = types::property_base<"text-decoration">;

                    text_decoration() = delete;
                    text_decoration(std::string_view line) : super_property(std::string(line)) {}
                    text_decoration(std::string_view line, std::string_view style) : super_property(std::format("{} {}", line, style)) {}
                    text_decoration(std::string_view line, std::string_view style, std::string_view color) : super_property(std::format("{} {} {}", line, style, color)) {}
                    text_decoration(std::string_view line, std::string_view style, std::string_view color, std::string_view thickness) : super_property(std::format("{} {} {} {}", line, style, color, thickness)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant underline{key, "underline"};
                    inline static constexpr types::property_constant overline{key, "overline"};
                    inline static constexpr types::property_constant line_through{key, "line-through"};
                    inline static constexpr types::property_constant blink{key, "blink"};
                    inline static constexpr types::property_constant solid{key, "solid"};
                    inline static constexpr types::property_constant double_{key, "double"};
                    inline static constexpr types::property_constant dotted{key, "dotted"};
                    inline static constexpr types::property_constant dashed{key, "dashed"};
                    inline static constexpr types::property_constant wavy{key, "wavy"};
                };
            }
        }
    }
}
