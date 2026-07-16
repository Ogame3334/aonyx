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
                struct padding_inline_start : types::property_base<"padding-inline-start">, constants::global_values<padding_inline_start>
                {
                    using super_property = types::property_base<"padding-inline-start">;

                    padding_inline_start() = delete;
                    padding_inline_start(util::numerical s) : super_property(s.to_string()) {}
                };
            }
        }
    }
}
