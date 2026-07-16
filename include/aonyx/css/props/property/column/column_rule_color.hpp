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
                struct column_rule_color : types::property_base<"column-rule-color">, constants::global_values<column_rule_color>
                {
                    using super_property = types::property_base<"column-rule-color">;

                    column_rule_color() = delete;
                    column_rule_color(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
