/** @brief CSS property: border-bottom-style
 *
 * border-bottom-style CSS property.
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
struct border_bottom_style : types::property_base<"border-bottom-style">, constants::global_values<border_bottom_style>
{
    using super_property = types::property_base<"border-bottom-style">;

    border_bottom_style() = delete;
    border_bottom_style(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
