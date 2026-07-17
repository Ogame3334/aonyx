/** @brief CSS property: text-decoration-color
 *
 * text-decoration-color CSS property.
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
struct text_decoration_color : types::property_base<"text-decoration-color">,
                               constants::global_values<text_decoration_color>
{
    using super_property = types::property_base<"text-decoration-color">;

    text_decoration_color() = delete;
    text_decoration_color(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
