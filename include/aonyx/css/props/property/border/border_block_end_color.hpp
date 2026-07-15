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
                struct border_block_end_color : types::property_base<"border-block-end-color">, constants::global_values<border_block_end_color>
                {
                    using super_property = types::property_base<"border-block-end-color">;

                    border_block_end_color() = delete;
                    border_block_end_color(std::string_view color) : super_property(std::string(color)) {}
                };
            }
        }
    }
}
