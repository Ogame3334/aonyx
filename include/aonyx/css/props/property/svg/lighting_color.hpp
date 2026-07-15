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
                struct lighting_color : types::property_base<"lighting-color">, constants::global_values<lighting_color>
                {
                    using super_property = types::property_base<"lighting-color">;

                    lighting_color() = delete;
                    lighting_color(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
