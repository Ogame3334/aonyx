/** @brief CSS property: line-height-step
 *
 * line-height-step CSS property.
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
                struct line_height_step : types::property_base<"line-height-step">, constants::global_values<line_height_step>
                {
                    using super_property = types::property_base<"line-height-step">;

                    line_height_step() = delete;
                    line_height_step(util::numerical v) : super_property(v.to_string()) {}
                };
            }
        }
    }
}
