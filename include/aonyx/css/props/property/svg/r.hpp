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
                struct r : types::property_base<"r">, constants::global_values<r>
                {
                    using super_property = types::property_base<"r">;

                    r() = delete;
                    r(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
