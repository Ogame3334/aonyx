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

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant most_width{key, "most-width"};
                    inline static constexpr types::property_constant most_height{key, "most-height"};
                    inline static constexpr types::property_constant most_size{key, "most-size"};
                    inline static constexpr types::property_constant most_block_size{key, "most-block-size"};
                    inline static constexpr types::property_constant most_inline_size{key, "most-inline-size"};
                };
            }
        }
    }
}
