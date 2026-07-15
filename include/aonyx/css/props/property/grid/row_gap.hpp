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
                struct row_gap : types::property_base<"row-gap">, constants::global_values<row_gap>
                {
                    using super_property = types::property_base<"row-gap">;

                    row_gap() = delete;
                    row_gap(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
