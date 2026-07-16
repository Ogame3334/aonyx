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
                struct orphans : types::property_base<"orphans">, constants::global_values<orphans>
                {
                    using super_property = types::property_base<"orphans">;

                    orphans() = delete;
                    orphans(util::numerical v) : super_property(v.to_string()) {}
                };
            }
        }
    }
}
