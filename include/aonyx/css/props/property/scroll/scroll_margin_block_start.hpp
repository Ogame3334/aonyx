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
                struct scroll_margin_block_start : types::property_base<"scroll-margin-block-start">, constants::global_values<scroll_margin_block_start>
                {
                    using super_property = types::property_base<"scroll-margin-block-start">;

                    scroll_margin_block_start() = delete;
                    scroll_margin_block_start(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
