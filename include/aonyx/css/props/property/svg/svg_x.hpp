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
                struct svg_x : types::property_base<"x">, constants::global_values<svg_x>
                {
                    using super_property = types::property_base<"x">;

                    svg_x() = delete;
                    svg_x(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
