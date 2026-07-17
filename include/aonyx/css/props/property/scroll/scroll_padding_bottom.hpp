/** @brief CSS property: scroll-padding-bottom
 *
 * scroll-padding-bottom CSS property.
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
struct scroll_padding_bottom : types::property_base<"scroll-padding-bottom">,
                               constants::global_values<scroll_padding_bottom>
{
    using super_property = types::property_base<"scroll-padding-bottom">;

    scroll_padding_bottom() = delete;
    scroll_padding_bottom(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
