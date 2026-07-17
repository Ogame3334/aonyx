/** @brief CSS property: clear
 *
 * clear CSS property.
 */
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
                struct clear : types::property_base<"clear">, constants::global_values<clear>
                {
                    using super_property = types::property_base<"clear">;

                    clear() = delete;
                    clear(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant left{key, "left"};
                    inline static constexpr types::property_constant right{key, "right"};
                    inline static constexpr types::property_constant both{key, "both"};
                    inline static constexpr types::property_constant inline_start{key, "inline-start"};
                    inline static constexpr types::property_constant inline_end{key, "inline-end"};
                };
            }
        }
    }
}
