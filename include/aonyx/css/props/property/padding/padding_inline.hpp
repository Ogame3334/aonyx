/** @brief CSS property: padding-inline
 *
 * padding-inline CSS property.
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
struct padding_inline : types::property_base<"padding-inline">, constants::global_values<padding_inline>
{
    using super_property = types::property_base<"padding-inline">;

    padding_inline() = delete;
    padding_inline(util::numerical s) : super_property(s.to_string())
    {
    }
    padding_inline(util::numerical s, util::numerical e) : super_property(std::format("{} {}", s, e))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
