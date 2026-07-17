/** @brief CSS property: text-underline-offset
 *
 * text-underline-offset CSS property.
 */
#pragma once

#include <string>
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
                struct text_underline_offset : types::property_base<"text-underline-offset">, constants::global_values<text_underline_offset>
                {
                    using super_property = types::property_base<"text-underline-offset">;

                    text_underline_offset() = delete;
                    text_underline_offset(util::numerical v) : super_property(v.to_string()) {}
                    text_underline_offset(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                    inline static constexpr types::property_constant from_font{key, "from-font"};
                };
            }
        }
    }
}
