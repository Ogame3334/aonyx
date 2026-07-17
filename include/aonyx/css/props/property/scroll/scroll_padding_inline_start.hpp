/** @brief CSS property: scroll-padding-inline-start
 *
 * scroll-padding-inline-start CSS property.
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
struct scroll_padding_inline_start : types::property_base<"scroll-padding-inline-start">,
                                     constants::global_values<scroll_padding_inline_start>
{
    using super_property = types::property_base<"scroll-padding-inline-start">;

    scroll_padding_inline_start() = delete;
    scroll_padding_inline_start(std::string_view v) : super_property(std::string(v))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
