/** @brief CSS property: scroll-margin-left
 *
 * scroll-margin-left CSS property.
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
struct scroll_margin_left : types::property_base<"scroll-margin-left">, constants::global_values<scroll_margin_left>
{
    using super_property = types::property_base<"scroll-margin-left">;

    scroll_margin_left() = delete;
    scroll_margin_left(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
