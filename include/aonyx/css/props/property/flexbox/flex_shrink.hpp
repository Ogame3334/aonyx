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
                struct flex_shrink : types::property_base<"flex-shrink">, constants::global_values<flex_shrink>
                {
                    using super_property = types::property_base<"flex-shrink">;

                    flex_shrink() = delete;
                    flex_shrink(util::numerical v) : super_property(v.to_string()) {}
                };
            }
        }
    }
}
