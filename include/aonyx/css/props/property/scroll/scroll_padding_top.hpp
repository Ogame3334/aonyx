/** @brief CSS property: scroll-padding-top
 *
 * scroll-padding-top CSS property.
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
struct scroll_padding_top : types::property_base<"scroll-padding-top">, constants::global_values<scroll_padding_top>
{
    using super_property = types::property_base<"scroll-padding-top">;

    scroll_padding_top() = delete;
    scroll_padding_top(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
