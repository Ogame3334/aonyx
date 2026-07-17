/** @brief CSS property: touch-action
 *
 * touch-action CSS property.
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
struct touch_action : types::property_base<"touch-action">, constants::global_values<touch_action>
{
    using super_property = types::property_base<"touch-action">;

    touch_action() = delete;
    touch_action(const std::string_view s) : super_property(std::string(s))
    {
    }
    touch_action(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant pan_x{key, "pan-x"};
    inline static constexpr types::property_constant pan_y{key, "pan-y"};
    inline static constexpr types::property_constant pan_left{key, "pan-left"};
    inline static constexpr types::property_constant pan_right{key, "pan-right"};
    inline static constexpr types::property_constant pan_up{key, "pan-up"};
    inline static constexpr types::property_constant pan_down{key, "pan-down"};
    inline static constexpr types::property_constant pinch_zoom{key, "pinch-zoom"};
    inline static constexpr types::property_constant manipulation{key, "manipulation"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
