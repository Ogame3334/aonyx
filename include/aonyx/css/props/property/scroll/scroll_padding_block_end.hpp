/** @brief CSS property: scroll-padding-block-end
 *
 * scroll-padding-block-end CSS property.
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
struct scroll_padding_block_end : types::property_base<"scroll-padding-block-end">,
                                  constants::global_values<scroll_padding_block_end>
{
    using super_property = types::property_base<"scroll-padding-block-end">;

    scroll_padding_block_end() = delete;
    scroll_padding_block_end(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
