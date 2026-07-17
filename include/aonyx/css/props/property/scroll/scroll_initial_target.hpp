/** @brief CSS property: scroll-initial-target
 *
 * scroll-initial-target CSS property.
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
                struct scroll_initial_target : types::property_base<"scroll-initial-target">, constants::global_values<scroll_initial_target>
                {
                    using super_property = types::property_base<"scroll-initial-target">;

                    scroll_initial_target() = delete;
                    scroll_initial_target(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
