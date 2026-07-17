/** @brief CSS property: margin-right
 *
 * margin-right CSS property.
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
                struct margin_right : types::property_base<"margin-right">, constants::global_values<margin_right>
                {
                    using super_property = types::property_base<"margin-right">;

                    margin_right() = delete;
                    margin_right(util::numerical r) : super_property(r.to_string()) {}
                };
            }
        }
    }
}
