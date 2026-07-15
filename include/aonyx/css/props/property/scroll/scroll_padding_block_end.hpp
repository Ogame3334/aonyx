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
                struct scroll_padding_block_end : types::property_base<"scroll-padding-block-end">, constants::global_values<scroll_padding_block_end>
                {
                    using super_property = types::property_base<"scroll-padding-block-end">;

                    scroll_padding_block_end() = delete;
                    scroll_padding_block_end(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
