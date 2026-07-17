/** @brief CSS property: view-timeline-axis
 *
 * view-timeline-axis CSS property.
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
struct view_timeline_axis : types::property_base<"view-timeline-axis">, constants::global_values<view_timeline_axis>
{
    using super_property = types::property_base<"view-timeline-axis">;

    view_timeline_axis() = delete;
    view_timeline_axis(std::string_view v) : super_property(std::string(v))
    {
    }
    view_timeline_axis(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant block{key, "block"};
    inline static constexpr types::property_constant inline_{key, "inline"};
    inline static constexpr types::property_constant x{key, "x"};
    inline static constexpr types::property_constant y{key, "y"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
