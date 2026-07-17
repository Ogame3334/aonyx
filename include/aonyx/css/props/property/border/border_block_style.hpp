/** @brief CSS property: border-block-style
 *
 * border-block-style CSS property.
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
struct border_block_style : types::property_base<"border-block-style">, constants::global_values<border_block_style>
{
    using super_property = types::property_base<"border-block-style">;

    border_block_style() = delete;
    border_block_style(const std::string_view s) : super_property(std::string(s))
    {
    }
    border_block_style(std::string_view start, std::string_view end) : super_property(std::format("{} {}", start, end))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
