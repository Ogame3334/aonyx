/** @brief CSS property: marker
 *
 * marker CSS property.
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
                struct marker : types::property_base<"marker">, constants::global_values<marker>
                {
                    using super_property = types::property_base<"marker">;

                    marker() = delete;
                    marker(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
