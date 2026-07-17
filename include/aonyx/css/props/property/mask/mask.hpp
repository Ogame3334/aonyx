/** @brief CSS property: mask
 *
 * mask CSS property.
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
struct mask : types::property_base<"mask">, constants::global_values<mask>
{
    using super_property = types::property_base<"mask">;

    mask() = delete;
    mask(std::string_view v) : super_property(std::string(v))
    {
    }
    mask(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
