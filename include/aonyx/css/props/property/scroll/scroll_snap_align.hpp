/** @brief CSS property: scroll-snap-align
 *
 * scroll-snap-align CSS property.
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
struct scroll_snap_align : types::property_base<"scroll-snap-align">, constants::global_values<scroll_snap_align>
{
    using super_property = types::property_base<"scroll-snap-align">;

    scroll_snap_align() = delete;
    scroll_snap_align(const std::string_view s) : super_property(std::string(s))
    {
    }
    scroll_snap_align(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant start{key, "start"};
    inline static constexpr types::property_constant end{key, "end"};
    inline static constexpr types::property_constant center{key, "center"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
