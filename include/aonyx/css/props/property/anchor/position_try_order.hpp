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
                struct position_try_order : types::property_base<"position-try-order">, constants::global_values<position_try_order>
                {
                    using super_property = types::property_base<"position-try-order">;

                    position_try_order() = delete;
                    position_try_order(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view most_width = "most-width";
                    inline static constexpr std::string_view most_height = "most-height";
                    inline static constexpr std::string_view most_size = "most-size";
                    inline static constexpr std::string_view most_block_size = "most-block-size";
                    inline static constexpr std::string_view most_inline_size = "most-inline-size";
                };
            }
        }
    }
}
