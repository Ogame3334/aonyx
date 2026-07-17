/** @brief CSS property: margin-block-end
 *
 * margin-block-end CSS property.
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
                struct margin_block_end : types::property_base<"margin-block-end">, constants::global_values<margin_block_end>
                {
                    using super_property = types::property_base<"margin-block-end">;

                    margin_block_end() = delete;
                    margin_block_end(util::numerical e) : super_property(e.to_string()) {}
                };
            }
        }
    }
}
