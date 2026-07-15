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
                struct margin_bottom : types::property_base<"margin-bottom">, constants::global_values<margin_bottom>
                {
                    using super_property = types::property_base<"margin-bottom">;

                    margin_bottom() = delete;
                    margin_bottom(util::numerical b) : super_property(b.to_string()) {}
                };
            }
        }
    }
}
