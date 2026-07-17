/** @brief CSS property: mask-border-repeat
 *
 * mask-border-repeat CSS property.
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
struct mask_border_repeat : types::property_base<"mask-border-repeat">, constants::global_values<mask_border_repeat>
{
    using super_property = types::property_base<"mask-border-repeat">;

    mask_border_repeat() = delete;
    mask_border_repeat(const std::string_view s) : super_property(std::string(s))
    {
    }
    mask_border_repeat(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant repeat{key, "repeat"};
    inline static constexpr types::property_constant stretch{key, "stretch"};
    inline static constexpr types::property_constant round{key, "round"};
    inline static constexpr types::property_constant space{key, "space"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
