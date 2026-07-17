/** @brief CSS property: animation-name
 *
 * animation-name CSS property.
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
struct animation_name : types::property_base<"animation-name">, constants::global_values<animation_name>
{
    using super_property = types::property_base<"animation-name">;

    animation_name() = delete;
    animation_name(const std::string_view s) : super_property(std::string(s))
    {
    }
    animation_name(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
