/** @brief CSS property: column-width
 *
 * column-width CSS property.
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
                struct column_width : types::property_base<"column-width">, constants::global_values<column_width>
                {
                    using super_property = types::property_base<"column-width">;

                    column_width() = delete;
                    column_width(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
