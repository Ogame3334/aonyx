/** @brief CSS property: view-timeline
 *
 * view-timeline CSS property.
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
struct view_timeline : types::property_base<"view-timeline">, constants::global_values<view_timeline>
{
    using super_property = types::property_base<"view-timeline">;

    view_timeline() = delete;
    view_timeline(const std::string_view s) : super_property(std::string(s))
    {
    }
    view_timeline(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    view_timeline(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {} {} {}", v1, v2, v3, v4))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
