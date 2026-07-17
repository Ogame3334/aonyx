/** @brief CSS property: column-gap
 *
 * column-gap CSS property.
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
                struct column_gap : types::property_base<"column-gap">, constants::global_values<column_gap>
                {
                    using super_property = types::property_base<"column-gap">;

                    column_gap() = delete;
                    column_gap(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                };
            }
        }
    }
}
