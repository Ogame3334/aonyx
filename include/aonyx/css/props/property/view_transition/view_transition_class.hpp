/** @brief CSS property: view-transition-class
 *
 * view-transition-class CSS property.
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
struct view_transition_class : types::property_base<"view-transition-class">,
                               constants::global_values<view_transition_class>
{
    using super_property = types::property_base<"view-transition-class">;

    view_transition_class() = delete;
    view_transition_class(const std::string_view s) : super_property(std::string(s))
    {
    }
    view_transition_class(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
