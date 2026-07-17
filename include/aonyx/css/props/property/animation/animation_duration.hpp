/** @brief CSS property: animation-duration
 *
 * animation-duration CSS property.
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
struct animation_duration : types::property_base<"animation-duration">, constants::global_values<animation_duration>
{
    using super_property = types::property_base<"animation-duration">;

    animation_duration() = delete;
    animation_duration(const std::string_view s) : super_property(std::string(s))
    {
    }
    animation_duration(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
