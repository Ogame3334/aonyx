/** @brief CSS property: scroll-margin-block
 *
 * scroll-margin-block CSS property.
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
struct scroll_margin_block : types::property_base<"scroll-margin-block">, constants::global_values<scroll_margin_block>
{
    using super_property = types::property_base<"scroll-margin-block">;

    scroll_margin_block() = delete;
    scroll_margin_block(std::string_view v) : super_property(std::string(v))
    {
    }
    scroll_margin_block(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
