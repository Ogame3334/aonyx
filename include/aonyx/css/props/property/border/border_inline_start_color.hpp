/** @brief CSS property: border-inline-start-color
 *
 * border-inline-start-color CSS property.
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
struct border_inline_start_color : types::property_base<"border-inline-start-color">,
                                   constants::global_values<border_inline_start_color>
{
    using super_property = types::property_base<"border-inline-start-color">;

    border_inline_start_color() = delete;
    border_inline_start_color(std::string_view color) : super_property(std::string(color))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
