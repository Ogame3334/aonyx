/** @brief CSS property: border-right-style
 *
 * border-right-style CSS property.
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
struct border_right_style : types::property_base<"border-right-style">, constants::global_values<border_right_style>
{
    using super_property = types::property_base<"border-right-style">;

    border_right_style() = delete;
    border_right_style(std::string_view style) : super_property(std::string(style))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
