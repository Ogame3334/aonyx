#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct stroke_dashoffset : types::property_base<"stroke-dashoffset">, constants::global_values<stroke_dashoffset>
                {
                    using super_property = types::property_base<"stroke-dashoffset">;

                    stroke_dashoffset() = delete;
                    stroke_dashoffset(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
