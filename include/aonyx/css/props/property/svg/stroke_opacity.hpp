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
                struct stroke_opacity : types::property_base<"stroke-opacity">, constants::global_values<stroke_opacity>
                {
                    using super_property = types::property_base<"stroke-opacity">;

                    stroke_opacity() = delete;
                    stroke_opacity(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
