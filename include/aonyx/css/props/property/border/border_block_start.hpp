/** @brief CSS property: border-block-start
 *
 * border-block-start CSS property.
 */
#pragma once

#include <format>
#include <string>
#include <string_view>

#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/css/props/types/property.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace property
{
struct border_block_start : types::property_base<"border-block-start">, constants::global_values<border_block_start>
{
    using super_property = types::property_base<"border-block-start">;

    border_block_start() = delete;
    border_block_start(std::string_view style) : super_property(std::string(style))
    {
    }
    border_block_start(util::numerical width, std::string_view style)
        : super_property(std::format("{} {}", width, style))
    {
    }
    border_block_start(std::string_view style, std::string_view color)
        : super_property(std::format("{} {}", style, color))
    {
    }
    border_block_start(util::numerical width, std::string_view style, std::string_view color)
        : super_property(std::format("{} {} {}", width, style, color))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
