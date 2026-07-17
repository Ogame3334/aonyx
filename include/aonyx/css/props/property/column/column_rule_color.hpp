/** @brief CSS property: column-rule-color
 *
 * column-rule-color CSS property.
 */
#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/css/props/types/property.hpp>

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
    column_rule_color(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
