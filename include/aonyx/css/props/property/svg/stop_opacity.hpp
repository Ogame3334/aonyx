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
                struct stop_opacity : types::property_base<"stop-opacity">, constants::global_values<stop_opacity>
                {
                    using super_property = types::property_base<"stop-opacity">;

                    stop_opacity() = delete;
                    stop_opacity(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
