/** @brief CSS property: background
 *
 * background CSS property.
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
struct background : types::property_base<"background">, constants::global_values<background>
{
    using super_property = types::property_base<"background">;

    background() = delete;
    background(const std::string_view s) : super_property(std::string(s))
    {
    }
    background(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }
    background(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{}, {}, {}", v1, v2, v3))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
