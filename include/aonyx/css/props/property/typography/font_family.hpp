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
                struct font_family : types::property_base<"font-family">, constants::global_values<font_family>
                {
                    using super_property = types::property_base<"font-family">;

                    font_family() = delete;
                    font_family(std::string_view family) : super_property(std::string(family)) {}
                    font_family(std::string_view family1, std::string_view family2) : super_property(std::format("{}, {}", family1, family2)) {}
                    font_family(std::string_view family1, std::string_view family2, std::string_view family3) : super_property(std::format("{}, {}, {}", family1, family2, family3)) {}

                    inline static constexpr std::string_view serif = "serif";
                    inline static constexpr std::string_view sans_serif = "sans-serif";
                    inline static constexpr std::string_view monospace = "monospace";
                    inline static constexpr std::string_view cursive = "cursive";
                    inline static constexpr std::string_view fantasy = "fantasy";
                    inline static constexpr std::string_view system_ui = "system-ui";
                    inline static constexpr std::string_view ui_serif = "ui-serif";
                    inline static constexpr std::string_view ui_sans_serif = "ui-sans-serif";
                    inline static constexpr std::string_view ui_monospace = "ui-monospace";
                    inline static constexpr std::string_view ui_rounded = "ui-rounded";
                    inline static constexpr std::string_view emoji = "emoji";
                    inline static constexpr std::string_view math = "math";
                    inline static constexpr std::string_view fangsong = "fangsong";
                };
            }
        }
    }
}
