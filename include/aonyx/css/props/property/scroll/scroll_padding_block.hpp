/** @brief CSS property: scroll-padding-block
 *
 * scroll-padding-block CSS property.
 */
#pragma once

#include <format>
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
struct scroll_padding_block : types::property_base<"scroll-padding-block">,
                              constants::global_values<scroll_padding_block>
{
    using super_property = types::property_base<"scroll-padding-block">;

    scroll_padding_block() = delete;
    scroll_padding_block(std::string_view v) : super_property(std::string(v))
    {
    }
    scroll_padding_block(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
