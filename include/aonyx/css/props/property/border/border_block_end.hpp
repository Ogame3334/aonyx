/** @brief CSS property: border-block-end
 *
 * border-block-end CSS property.
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
struct border_block_end : types::property_base<"border-block-end">, constants::global_values<border_block_end>
{
    using super_property = types::property_base<"border-block-end">;

    border_block_end() = delete;
    border_block_end(std::string_view style) : super_property(std::string(style))
    {
    }
    border_block_end(util::numerical width, std::string_view style) : super_property(std::format("{} {}", width, style))
    {
    }
    border_block_end(std::string_view style, std::string_view color)
        : super_property(std::format("{} {}", style, color))
    {
    }
    border_block_end(util::numerical width, std::string_view style, std::string_view color)
        : super_property(std::format("{} {} {}", width, style, color))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
