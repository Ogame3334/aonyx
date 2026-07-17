/** @brief CSS property: scroll-margin-inline-start
 *
 * scroll-margin-inline-start CSS property.
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
struct scroll_margin_inline_start : types::property_base<"scroll-margin-inline-start">,
                                    constants::global_values<scroll_margin_inline_start>
{
    using super_property = types::property_base<"scroll-margin-inline-start">;

    scroll_margin_inline_start() = delete;
    scroll_margin_inline_start(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
