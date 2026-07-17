/** @brief CSS property: animation-range-start
 *
 * animation-range-start CSS property.
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
struct animation_range_start : types::property_base<"animation-range-start">,
                               constants::global_values<animation_range_start>
{
    using super_property = types::property_base<"animation-range-start">;

    animation_range_start() = delete;
    animation_range_start(const std::string_view s) : super_property(std::string(s))
    {
    }
    animation_range_start(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
