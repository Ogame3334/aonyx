/** @brief CSS property: animation-direction
 *
 * animation-direction CSS property.
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
struct animation_direction : types::property_base<"animation-direction">, constants::global_values<animation_direction>
{
    using super_property = types::property_base<"animation-direction">;

    animation_direction() = delete;
    animation_direction(std::string_view v) : super_property(std::string(v))
    {
    }
    animation_direction(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant reverse{key, "reverse"};
    inline static constexpr types::property_constant alternate{key, "alternate"};
    inline static constexpr types::property_constant alternate_reverse{key, "alternate-reverse"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
