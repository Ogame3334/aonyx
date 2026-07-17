/** @brief CSS property: border-inline-width
 *
 * border-inline-width CSS property.
 */
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
                struct border_inline_width : types::property_base<"border-inline-width">, constants::global_values<border_inline_width>
                {
                    using super_property = types::property_base<"border-inline-width">;

                    border_inline_width() = delete;
                    border_inline_width(util::numerical w) : super_property(w.to_string()) {}
                    border_inline_width(util::numerical start, util::numerical end) : super_property(std::format("{} {}", start, end)) {}
                };
            }
        }
    }
}
