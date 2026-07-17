/** @brief CSS property: text-decoration-line
 *
 * text-decoration-line CSS property.
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
                struct text_decoration_line : types::property_base<"text-decoration-line">, constants::global_values<text_decoration_line>
                {
                    using super_property = types::property_base<"text-decoration-line">;

                    text_decoration_line() = delete;
                    text_decoration_line(std::string_view v) : super_property(std::string(v)) {}
                    text_decoration_line(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    text_decoration_line(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant underline{key, "underline"};
                    inline static constexpr types::property_constant overline{key, "overline"};
                    inline static constexpr types::property_constant line_through{key, "line-through"};
                    inline static constexpr types::property_constant blink{key, "blink"};
                    inline static constexpr types::property_constant spelling_error{key, "spelling-error"};
                    inline static constexpr types::property_constant grammar_error{key, "grammar-error"};
                };
            }
        }
    }
}
