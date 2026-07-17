/** @brief CSS property: border-block-start-style
 *
 * border-block-start-style CSS property.
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
struct border_block_start_style : types::property_base<"border-block-start-style">,
                                  constants::global_values<border_block_start_style>
{
    using super_property = types::property_base<"border-block-start-style">;

    border_block_start_style() = delete;
    border_block_start_style(std::string_view style) : super_property(std::string(style))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
