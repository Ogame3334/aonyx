/** @brief CSS property: column-count
 *
 * column-count CSS property.
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
                struct column_count : types::property_base<"column-count">, constants::global_values<column_count>
                {
                    using super_property = types::property_base<"column-count">;

                    column_count() = delete;
                    column_count(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
