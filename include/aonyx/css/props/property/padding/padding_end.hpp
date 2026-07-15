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
                struct padding_end : types::property_base<"padding-end">, constants::global_values<padding_end>
                {
                    using super_property = types::property_base<"padding-end">;

                    padding_end() = delete;
                    padding_end(util::numerical e) : super_property(e.to_string()) {}
                };
            }
        }
    }
}
