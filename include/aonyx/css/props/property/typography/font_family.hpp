/** @brief CSS property: font-family
 *
 * font-family CSS property.
 */
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

                    inline static constexpr types::property_constant serif{key, "serif"};
                    inline static constexpr types::property_constant sans_serif{key, "sans-serif"};
                    inline static constexpr types::property_constant monospace{key, "monospace"};
                    inline static constexpr types::property_constant cursive{key, "cursive"};
                    inline static constexpr types::property_constant fantasy{key, "fantasy"};
                    inline static constexpr types::property_constant system_ui{key, "system-ui"};
                    inline static constexpr types::property_constant ui_serif{key, "ui-serif"};
                    inline static constexpr types::property_constant ui_sans_serif{key, "ui-sans-serif"};
                    inline static constexpr types::property_constant ui_monospace{key, "ui-monospace"};
                    inline static constexpr types::property_constant ui_rounded{key, "ui-rounded"};
                    inline static constexpr types::property_constant emoji{key, "emoji"};
                    inline static constexpr types::property_constant math{key, "math"};
                    inline static constexpr types::property_constant fangsong{key, "fangsong"};
                };
            }
        }
    }
}
