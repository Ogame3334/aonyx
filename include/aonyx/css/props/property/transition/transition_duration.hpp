/** @brief CSS property: transition-duration
 *
 * transition-duration CSS property.
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
struct transition_duration : types::property_base<"transition-duration">, constants::global_values<transition_duration>
{
    using super_property = types::property_base<"transition-duration">;

    transition_duration() = delete;
    transition_duration(std::string_view v) : super_property(std::string(v))
    {
    }
    transition_duration(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }
    transition_duration(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{}, {}, {}", v1, v2, v3))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
