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
                struct border_inline_end_style : types::property_base<"border-inline-end-style">, constants::global_values<border_inline_end_style>
                {
                    using super_property = types::property_base<"border-inline-end-style">;

                    border_inline_end_style() = delete;
                    border_inline_end_style(std::string_view style) : super_property(std::string(style)) {}
                };
            }
        }
    }
}
