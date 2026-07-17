/** @brief CSS property: margin-inline-end
 *
 * margin-inline-end CSS property.
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
                struct margin_inline_end : types::property_base<"margin-inline-end">, constants::global_values<margin_inline_end>
                {
                    using super_property = types::property_base<"margin-inline-end">;

                    margin_inline_end() = delete;
                    margin_inline_end(util::numerical e) : super_property(e.to_string()) {}
                };
            }
        }
    }
}
