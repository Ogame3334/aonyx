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
                struct cx : types::property_base<"cx">, constants::global_values<cx>
                {
                    using super_property = types::property_base<"cx">;

                    cx() = delete;
                    cx(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
