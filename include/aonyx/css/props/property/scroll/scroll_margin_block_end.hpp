/** @brief CSS property: scroll-margin-block-end
 *
 * scroll-margin-block-end CSS property.
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
struct scroll_margin_block_end : types::property_base<"scroll-margin-block-end">,
                                 constants::global_values<scroll_margin_block_end>
{
    using super_property = types::property_base<"scroll-margin-block-end">;

    scroll_margin_block_end() = delete;
    scroll_margin_block_end(std::string_view v) : super_property(std::string(v))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
