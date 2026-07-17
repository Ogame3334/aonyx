/** @brief CSS property: animation-range
 *
 * animation-range CSS property.
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
struct animation_range : types::property_base<"animation-range">, constants::global_values<animation_range>
{
    using super_property = types::property_base<"animation-range">;

    animation_range() = delete;
    animation_range(const std::string_view s) : super_property(std::string(s))
    {
    }
    animation_range(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    animation_range(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {} {} {}", v1, v2, v3, v4))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
