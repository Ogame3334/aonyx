/** @brief CSS property: widows
 *
 * widows CSS property.
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
                struct widows : types::property_base<"widows">, constants::global_values<widows>
                {
                    using super_property = types::property_base<"widows">;

                    widows() = delete;
                    widows(util::numerical v) : super_property(v.to_string()) {}
                };
            }
        }
    }
}
