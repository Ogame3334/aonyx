/** @brief CSS property: border-block-color
 *
 * border-block-color CSS property.
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
struct border_block_color : types::property_base<"border-block-color">, constants::global_values<border_block_color>
{
    using super_property = types::property_base<"border-block-color">;

    border_block_color() = delete;
    border_block_color(std::string_view color) : super_property(std::string(color))
    {
    }
    border_block_color(std::string_view start, std::string_view end) : super_property(std::format("{} {}", start, end))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
