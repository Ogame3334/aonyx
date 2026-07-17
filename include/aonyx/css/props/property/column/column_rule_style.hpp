/** @brief CSS property: column-rule-style
 *
 * column-rule-style CSS property.
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
struct column_rule_style : types::property_base<"column-rule-style">, constants::global_values<column_rule_style>
{
    using super_property = types::property_base<"column-rule-style">;

    column_rule_style() = delete;
    column_rule_style(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant hidden{key, "hidden"};
    inline static constexpr types::property_constant dotted{key, "dotted"};
    inline static constexpr types::property_constant dashed{key, "dashed"};
    inline static constexpr types::property_constant solid{key, "solid"};
    inline static constexpr types::property_constant double_{key, "double"};
    inline static constexpr types::property_constant groove{key, "groove"};
    inline static constexpr types::property_constant ridge{key, "ridge"};
    inline static constexpr types::property_constant inset{key, "inset"};
    inline static constexpr types::property_constant outset{key, "outset"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
