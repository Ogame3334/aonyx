/** @brief CSS property: animation-delay
 *
 * animation-delay CSS property.
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
struct animation_delay : types::property_base<"animation-delay">, constants::global_values<animation_delay>
{
    using super_property = types::property_base<"animation-delay">;

    animation_delay() = delete;
    animation_delay(std::string_view v) : super_property(std::string(v))
    {
    }
    animation_delay(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
