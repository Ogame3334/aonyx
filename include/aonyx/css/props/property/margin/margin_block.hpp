/** @brief CSS property: margin-block
 *
 * margin-block CSS property.
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
                struct margin_block : types::property_base<"margin-block">, constants::global_values<margin_block>
                {
                    using super_property = types::property_base<"margin-block">;

                    margin_block() = delete;
                    margin_block(util::numerical s) : super_property(s.to_string()) {}
                    margin_block(util::numerical s, util::numerical e) : super_property(std::format("{} {}", s, e)) {}
                };
            }
        }
    }
}
