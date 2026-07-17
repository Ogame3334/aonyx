/** @brief CSS property: view-timeline-inset
 *
 * view-timeline-inset CSS property.
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
struct view_timeline_inset : types::property_base<"view-timeline-inset">, constants::global_values<view_timeline_inset>
{
    using super_property = types::property_base<"view-timeline-inset">;

    view_timeline_inset() = delete;
    view_timeline_inset(std::string_view v) : super_property(std::string(v))
    {
    }
    view_timeline_inset(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    view_timeline_inset(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {} {} {}", v1, v2, v3, v4))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
