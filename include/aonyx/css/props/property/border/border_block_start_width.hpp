#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct border_block_start_width : types::property_base<"border-block-start-width">, constants::global_values<border_block_start_width>
                {
                    using super_property = types::property_base<"border-block-start-width">;

                    border_block_start_width() = delete;
                    border_block_start_width(util::numerical w) : super_property(w.to_string()) {}
                };
            }
        }
    }
}
