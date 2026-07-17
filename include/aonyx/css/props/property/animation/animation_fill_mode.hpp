/** @brief CSS property: animation-fill-mode
 *
 * animation-fill-mode CSS property.
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
struct animation_fill_mode : types::property_base<"animation-fill-mode">, constants::global_values<animation_fill_mode>
{
    using super_property = types::property_base<"animation-fill-mode">;

    animation_fill_mode() = delete;
    animation_fill_mode(const std::string_view s) : super_property(std::string(s))
    {
    }
    animation_fill_mode(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant forwards{key, "forwards"};
    inline static constexpr types::property_constant backwards{key, "backwards"};
    inline static constexpr types::property_constant both{key, "both"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
