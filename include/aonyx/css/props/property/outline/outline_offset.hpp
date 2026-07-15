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
                struct outline_offset : types::property_base<"outline-offset">, constants::global_values<outline_offset>
                {
                    using super_property = types::property_base<"outline-offset">;

                    outline_offset() = delete;
                    outline_offset(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
