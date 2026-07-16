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
                struct border_bottom_style : types::property_base<"border-bottom-style">, constants::global_values<border_bottom_style>
                {
                    using super_property = types::property_base<"border-bottom-style">;

                    border_bottom_style() = delete;
                    border_bottom_style(std::string_view style) : super_property(std::string(style)) {}
                };
            }
        }
    }
}
