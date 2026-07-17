/** @brief CSS property: column-rule-width
 *
 * column-rule-width CSS property.
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
struct column_rule_width : types::property_base<"column-rule-width">, constants::global_values<column_rule_width>
{
    using super_property = types::property_base<"column-rule-width">;

    column_rule_width() = delete;
    column_rule_width(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant thin{key, "thin"};
    inline static constexpr types::property_constant medium{key, "medium"};
    inline static constexpr types::property_constant thick{key, "thick"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
