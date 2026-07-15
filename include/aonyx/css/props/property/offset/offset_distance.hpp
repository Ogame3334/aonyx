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
                struct offset_distance : types::property_base<"offset-distance">, constants::global_values<offset_distance>
                {
                    using super_property = types::property_base<"offset-distance">;

                    offset_distance() = delete;
                    offset_distance(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
