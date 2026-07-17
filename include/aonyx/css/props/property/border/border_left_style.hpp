/** @brief CSS property: border-left-style
 *
 * border-left-style CSS property.
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
struct border_left_style : types::property_base<"border-left-style">, constants::global_values<border_left_style>
{
    using super_property = types::property_base<"border-left-style">;

    border_left_style() = delete;
    border_left_style(std::string_view style) : super_property(std::string(style))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
