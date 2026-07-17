/** @brief CSS property: opacity
 *
 * opacity CSS property.
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
                struct opacity : types::property_base<"opacity">, constants::global_values<opacity>
                {
                    using super_property = types::property_base<"opacity">;

                    opacity() = delete;
                    opacity(util::numerical v) : super_property(v.to_string()) {}
                };
            }
        }
    }
}
