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
                struct padding_block : types::property_base<"padding-block">, constants::global_values<padding_block>
                {
                    using super_property = types::property_base<"padding-block">;

                    padding_block() = delete;
                    padding_block(util::numerical se) : super_property(se.to_string()) {}
                    padding_block(util::numerical s, util::numerical e) : super_property(std::format("{} {}", s, e)) {}
                };
            }
        }
    }
}
