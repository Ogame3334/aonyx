/** @brief CSS property: border-image-slice
 *
 * border-image-slice CSS property.
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
struct border_image_slice : types::property_base<"border-image-slice">, constants::global_values<border_image_slice>
{
    using super_property = types::property_base<"border-image-slice">;

    border_image_slice() = delete;
    border_image_slice(std::string_view slice) : super_property(std::string(slice))
    {
    }
    border_image_slice(std::string_view slice, std::string_view fill)
        : super_property(std::format("{} {}", slice, fill))
    {
    }

    inline static constexpr types::property_constant fill{key, "fill"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
