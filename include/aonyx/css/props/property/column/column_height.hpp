/** @brief CSS property: column-height
 *
 * column-height CSS property.
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
                struct column_height : types::property_base<"column-height">, constants::global_values<column_height>
                {
                    using super_property = types::property_base<"column-height">;

                    column_height() = delete;
                    column_height(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
