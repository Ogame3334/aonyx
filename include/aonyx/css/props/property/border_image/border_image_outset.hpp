/** @brief CSS property: border-image-outset
 *
 * border-image-outset CSS property.
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
struct border_image_outset : types::property_base<"border-image-outset">, constants::global_values<border_image_outset>
{
    using super_property = types::property_base<"border-image-outset">;

    border_image_outset() = delete;
    border_image_outset(std::string_view outset) : super_property(std::string(outset))
    {
    }
    border_image_outset(std::string_view top_bottom, std::string_view left_right)
        : super_property(std::format("{} {}", top_bottom, left_right))
    {
    }
    border_image_outset(std::string_view top, std::string_view left_right, std::string_view bottom)
        : super_property(std::format("{} {} {}", top, left_right, bottom))
    {
    }
    border_image_outset(std::string_view top, std::string_view right, std::string_view bottom, std::string_view left)
        : super_property(std::format("{} {} {} {}", top, right, bottom, left))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
