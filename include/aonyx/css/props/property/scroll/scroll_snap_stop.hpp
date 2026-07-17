/** @brief CSS property: scroll-snap-stop
 *
 * scroll-snap-stop CSS property.
 */
#pragma once

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
struct scroll_snap_stop : types::property_base<"scroll-snap-stop">, constants::global_values<scroll_snap_stop>
{
    using super_property = types::property_base<"scroll-snap-stop">;

    scroll_snap_stop() = delete;
    scroll_snap_stop(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant always{key, "always"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
