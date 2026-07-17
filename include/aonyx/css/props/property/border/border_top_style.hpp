/** @brief CSS property: border-top-style
 *
 * border-top-style CSS property.
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
struct border_top_style : types::property_base<"border-top-style">, constants::global_values<border_top_style>
{
    using super_property = types::property_base<"border-top-style">;

    border_top_style() = delete;
    border_top_style(std::string_view style) : super_property(std::string(style))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
