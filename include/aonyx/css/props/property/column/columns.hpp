/** @brief CSS property: columns
 *
 * columns CSS property.
 */
#pragma once

#include <string>
#include <format>
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
                struct columns : types::property_base<"columns">, constants::global_values<columns>
                {
                    using super_property = types::property_base<"columns">;

                    columns() = delete;
                    columns(std::string_view v) : super_property(std::string(v)) {}
                    columns(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                };
            }
        }
    }
}
