/** @brief CSS property: border-inline
 *
 * border-inline CSS property.
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
struct border_inline : types::property_base<"border-inline">, constants::global_values<border_inline>
{
    using super_property = types::property_base<"border-inline">;

    border_inline() = delete;
    border_inline(const std::string_view s) : super_property(std::string(s))
    {
    }
    border_inline(util::numerical width, std::string_view style) : super_property(std::format("{} {}", width, style))
    {
    }
    border_inline(std::string_view style, std::string_view color) : super_property(std::format("{} {}", style, color))
    {
    }
    border_inline(util::numerical width, std::string_view style, std::string_view color)
        : super_property(std::format("{} {} {}", width, style, color))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
