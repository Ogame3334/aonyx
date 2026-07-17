/** @brief CSS property: marker-start
 *
 * marker-start CSS property.
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
                struct marker_start : types::property_base<"marker-start">, constants::global_values<marker_start>
                {
                    using super_property = types::property_base<"marker-start">;

                    marker_start() = delete;
                    marker_start(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
