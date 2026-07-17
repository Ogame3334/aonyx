/** @brief CSS property: padding-top
 *
 * padding-top CSS property.
 */
#pragma once

#include <format>

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
                struct padding_top : types::property_base<"padding-top">, constants::global_values<padding_top>
                {
                    using super_property = types::property_base<"padding-top">;

                    padding_top() = delete;
                    padding_top(util::numerical t) : super_property(t.to_string()) {}
                };
            }
        }
    }
}
