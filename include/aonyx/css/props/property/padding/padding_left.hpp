/** @brief CSS property: padding-left
 *
 * padding-left CSS property.
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
struct padding_left : types::property_base<"padding-left">, constants::global_values<padding_left>
{
    using super_property = types::property_base<"padding-left">;

    padding_left() = delete;
    padding_left(util::numerical l) : super_property(l.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
