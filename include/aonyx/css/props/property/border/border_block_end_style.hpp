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
                struct border_block_end_style : types::property_base<"border-block-end-style">, constants::global_values<border_block_end_style>
                {
                    using super_property = types::property_base<"border-block-end-style">;

                    border_block_end_style() = delete;
                    border_block_end_style(std::string_view style) : super_property(std::string(style)) {}
                };
            }
        }
    }
}
