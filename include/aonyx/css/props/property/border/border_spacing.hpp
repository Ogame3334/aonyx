/** @brief CSS property: border-spacing
 *
 * border-spacing CSS property.
 */
#pragma once

#include <format>
#include <string>
#include <string_view>

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
struct border_spacing : types::property_base<"border-spacing">, constants::global_values<border_spacing>
{
    using super_property = types::property_base<"border-spacing">;

    border_spacing() = delete;
    border_spacing(const std::string_view s) : super_property(std::string(s))
    {
    }
    border_spacing(util::numerical l) : super_property(l.to_string())
    {
    }
    border_spacing(util::numerical h, util::numerical v) : super_property(std::format("{} {}", h, v))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
