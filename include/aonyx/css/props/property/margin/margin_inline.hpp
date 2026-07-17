/** @brief CSS property: margin-inline
 *
 * margin-inline CSS property.
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
struct margin_inline : types::property_base<"margin-inline">, constants::global_values<margin_inline>
{
    using super_property = types::property_base<"margin-inline">;

    margin_inline() = delete;
    margin_inline(util::numerical s) : super_property(s.to_string())
    {
    }
    margin_inline(util::numerical s, util::numerical e) : super_property(std::format("{} {}", s, e))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
