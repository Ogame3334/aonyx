/** @brief CSS property: scroll-timeline
 *
 * scroll-timeline CSS property.
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
struct scroll_timeline : types::property_base<"scroll-timeline">, constants::global_values<scroll_timeline>
{
    using super_property = types::property_base<"scroll-timeline">;

    scroll_timeline() = delete;
    scroll_timeline(const std::string_view s) : super_property(std::string(s))
    {
    }
    scroll_timeline(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
