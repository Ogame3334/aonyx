/** @brief CSS property: border-inline-end-width
 *
 * border-inline-end-width CSS property.
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
                struct border_inline_end_width : types::property_base<"border-inline-end-width">, constants::global_values<border_inline_end_width>
                {
                    using super_property = types::property_base<"border-inline-end-width">;

                    border_inline_end_width() = delete;
                    border_inline_end_width(util::numerical w) : super_property(w.to_string()) {}
                };
            }
        }
    }
}
