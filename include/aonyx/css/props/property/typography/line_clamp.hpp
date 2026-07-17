/** @brief CSS property: line-clamp
 *
 * line-clamp CSS property.
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
                struct line_clamp : types::property_base<"line-clamp">, constants::global_values<line_clamp>
                {
                    using super_property = types::property_base<"line-clamp">;

                    line_clamp() = delete;
                    line_clamp(util::numerical v) : super_property(v.to_string()) {}
                };
            }
        }
    }
}
