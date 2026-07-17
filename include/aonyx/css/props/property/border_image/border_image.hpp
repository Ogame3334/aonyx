/** @brief CSS property: border-image
 *
 * border-image CSS property.
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
struct border_image : types::property_base<"border-image">, constants::global_values<border_image>
{
    using super_property = types::property_base<"border-image">;

    border_image() = delete;
    border_image(std::string_view source) : super_property(std::string(source))
    {
    }
    border_image(std::string_view source, std::string_view slice) : super_property(std::format("{} {}", source, slice))
    {
    }
    border_image(std::string_view source, std::string_view slice, std::string_view width)
        : super_property(std::format("{} {} {}", source, slice, width))
    {
    }
    border_image(std::string_view source, std::string_view slice, std::string_view width, std::string_view outset)
        : super_property(std::format("{} {} {} {}", source, slice, width, outset))
    {
    }
    border_image(std::string_view source,
                 std::string_view slice,
                 std::string_view width,
                 std::string_view outset,
                 std::string_view repeat)
        : super_property(std::format("{} {} {} {} {}", source, slice, width, outset, repeat))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
