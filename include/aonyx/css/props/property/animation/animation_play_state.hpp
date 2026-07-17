/** @brief CSS property: animation-play-state
 *
 * animation-play-state CSS property.
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
struct animation_play_state : types::property_base<"animation-play-state">,
                              constants::global_values<animation_play_state>
{
    using super_property = types::property_base<"animation-play-state">;

    animation_play_state() = delete;
    animation_play_state(const std::string_view s) : super_property(std::string(s))
    {
    }
    animation_play_state(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant running{key, "running"};
    inline static constexpr types::property_constant paused{key, "paused"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
