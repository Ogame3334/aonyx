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
                struct overflow_clip_margin : types::property_base<"overflow-clip-margin">, constants::global_values<overflow_clip_margin>
                {
                    using super_property = types::property_base<"overflow-clip-margin">;

                    overflow_clip_margin() = delete;
                    overflow_clip_margin(util::numerical v) : super_property(v.to_string()) {}
                };
            }
        }
    }
}
