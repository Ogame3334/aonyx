/** @brief CSS property: column-rule
 *
 * column-rule CSS property.
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
                struct column_rule : types::property_base<"column-rule">, constants::global_values<column_rule>
                {
                    using super_property = types::property_base<"column-rule">;

                    column_rule() = delete;
                    column_rule(std::string_view v) : super_property(std::string(v)) {}
                    column_rule(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    column_rule(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                };
            }
        }
    }
}
