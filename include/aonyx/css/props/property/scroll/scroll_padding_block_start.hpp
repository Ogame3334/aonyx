/** @brief CSS property: scroll-padding-block-start
 *
 * scroll-padding-block-start CSS property.
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
struct scroll_padding_block_start : types::property_base<"scroll-padding-block-start">,
                                    constants::global_values<scroll_padding_block_start>
{
    using super_property = types::property_base<"scroll-padding-block-start">;

    scroll_padding_block_start() = delete;
    scroll_padding_block_start(std::string_view v) : super_property(std::string(v))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
