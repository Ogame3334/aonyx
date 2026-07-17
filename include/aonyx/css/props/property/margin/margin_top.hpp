/** @brief CSS property: margin-top
 *
 * margin-top CSS property.
 */
#pragma once

#include <format>

#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/css/props/types/property.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace property
{
struct margin_top : types::property_base<"margin-top">, constants::global_values<margin_top>
{
    using super_property = types::property_base<"margin-top">;

    margin_top() = delete;
    margin_top(util::numerical t) : super_property(t.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
