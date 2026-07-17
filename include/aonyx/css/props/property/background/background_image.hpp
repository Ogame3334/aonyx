/** @brief CSS property: background-image
 *
 * background-image CSS property.
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
struct background_image : types::property_base<"background-image">, constants::global_values<background_image>
{
    using super_property = types::property_base<"background-image">;

    background_image() = delete;
    background_image(const std::string_view s) : super_property(std::string(s))
    {
    }
    background_image(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
