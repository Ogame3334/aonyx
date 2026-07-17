/** @brief CSS property: shape-margin
 *
 * shape-margin CSS property.
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
                struct shape_margin : types::property_base<"shape-margin">, constants::global_values<shape_margin>
                {
                    using super_property = types::property_base<"shape-margin">;

                    shape_margin() = delete;
                    shape_margin(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
