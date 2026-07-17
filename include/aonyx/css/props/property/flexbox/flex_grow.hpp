/** @brief CSS property: flex-grow
 *
 * flex-grow CSS property.
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
                struct flex_grow : types::property_base<"flex-grow">, constants::global_values<flex_grow>
                {
                    using super_property = types::property_base<"flex-grow">;

                    flex_grow() = delete;
                    flex_grow(util::numerical v) : super_property(v.to_string()) {}
                };
            }
        }
    }
}
