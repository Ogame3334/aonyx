/** @brief CSS property: border-left-width
 *
 * border-left-width CSS property.
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
                struct border_left_width : types::property_base<"border-left-width">, constants::global_values<border_left_width>
                {
                    using super_property = types::property_base<"border-left-width">;

                    border_left_width() = delete;
                    border_left_width(util::numerical w) : super_property(w.to_string()) {}
                };
            }
        }
    }
}
