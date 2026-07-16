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
                struct margin_block_start : types::property_base<"margin-block-start">, constants::global_values<margin_block_start>
                {
                    using super_property = types::property_base<"margin-block-start">;

                    margin_block_start() = delete;
                    margin_block_start(util::numerical s) : super_property(s.to_string()) {}
                };
            }
        }
    }
}
