/** @brief CSS property: transform-style
 *
 * transform-style CSS property.
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
                struct transform_style : types::property_base<"transform-style">, constants::global_values<transform_style>
                {
                    using super_property = types::property_base<"transform-style">;

                    transform_style() = delete;
                    transform_style(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant flat{key, "flat"};
                    inline static constexpr types::property_constant preserve_3d{key, "preserve-3d"};
                };
            }
        }
    }
}
