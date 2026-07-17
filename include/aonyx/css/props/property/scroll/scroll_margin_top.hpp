/** @brief CSS property: scroll-margin-top
 *
 * scroll-margin-top CSS property.
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
struct scroll_margin_top : types::property_base<"scroll-margin-top">, constants::global_values<scroll_margin_top>
{
    using super_property = types::property_base<"scroll-margin-top">;

    scroll_margin_top() = delete;
    scroll_margin_top(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
