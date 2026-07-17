/** @brief CSS property: padding-block-start
 *
 * padding-block-start CSS property.
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
                struct padding_block_start : types::property_base<"padding-block-start">, constants::global_values<padding_block_start>
                {
                    using super_property = types::property_base<"padding-block-start">;

                    padding_block_start() = delete;
                    padding_block_start(util::numerical s) : super_property(s.to_string()) {}
                };
            }
        }
    }
}
