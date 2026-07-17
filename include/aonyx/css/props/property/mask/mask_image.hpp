/** @brief CSS property: mask-image
 *
 * mask-image CSS property.
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
struct mask_image : types::property_base<"mask-image">, constants::global_values<mask_image>
{
    using super_property = types::property_base<"mask-image">;

    mask_image() = delete;
    mask_image(std::string_view v) : super_property(std::string(v))
    {
    }
    mask_image(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
