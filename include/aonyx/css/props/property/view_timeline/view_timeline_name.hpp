/** @brief CSS property: view-timeline-name
 *
 * view-timeline-name CSS property.
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
struct view_timeline_name : types::property_base<"view-timeline-name">, constants::global_values<view_timeline_name>
{
    using super_property = types::property_base<"view-timeline-name">;

    view_timeline_name() = delete;
    view_timeline_name(std::string_view v) : super_property(std::string(v))
    {
    }
    view_timeline_name(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
