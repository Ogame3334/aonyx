#pragma once

#include <string>
#include <format>
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
                struct border_block_width : types::property_base<"border-block-width">, constants::global_values<border_block_width>
                {
                    using super_property = types::property_base<"border-block-width">;

                    border_block_width() = delete;
                    border_block_width(util::numerical w) : super_property(w.to_string()) {}
                    border_block_width(util::numerical start, util::numerical end) : super_property(std::format("{} {}", start, end)) {}
                };
            }
        }
    }
}
