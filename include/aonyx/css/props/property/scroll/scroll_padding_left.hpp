/** @brief CSS property: scroll-padding-left
 *
 * scroll-padding-left CSS property.
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
struct scroll_padding_left : types::property_base<"scroll-padding-left">, constants::global_values<scroll_padding_left>
{
    using super_property = types::property_base<"scroll-padding-left">;

    scroll_padding_left() = delete;
    scroll_padding_left(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
