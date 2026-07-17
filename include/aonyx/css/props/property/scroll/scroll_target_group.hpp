/** @brief CSS property: scroll-target-group
 *
 * scroll-target-group CSS property.
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
                struct scroll_target_group : types::property_base<"scroll-target-group">, constants::global_values<scroll_target_group>
                {
                    using super_property = types::property_base<"scroll-target-group">;

                    scroll_target_group() = delete;
                    scroll_target_group(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
