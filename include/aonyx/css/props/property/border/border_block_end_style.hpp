/** @brief CSS property: border-block-end-style
 *
 * border-block-end-style CSS property.
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
struct border_block_end_style : types::property_base<"border-block-end-style">,
                                constants::global_values<border_block_end_style>
{
    using super_property = types::property_base<"border-block-end-style">;

    border_block_end_style() = delete;
    border_block_end_style(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
