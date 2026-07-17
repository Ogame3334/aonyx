/** @brief CSS property: scroll-margin-block-start
 *
 * scroll-margin-block-start CSS property.
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
struct scroll_margin_block_start : types::property_base<"scroll-margin-block-start">,
                                   constants::global_values<scroll_margin_block_start>
{
    using super_property = types::property_base<"scroll-margin-block-start">;

    scroll_margin_block_start() = delete;
    scroll_margin_block_start(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
