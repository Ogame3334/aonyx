/** @brief CSS property: object-view-box
 *
 * object-view-box CSS property.
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
struct object_view_box : types::property_base<"object-view-box">, constants::global_values<object_view_box>
{
    using super_property = types::property_base<"object-view-box">;

    object_view_box() = delete;
    object_view_box(const std::string_view s) : super_property(std::string(s))
    {
    }
    object_view_box(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("inset({} {} {} {})", v1, v2, v3, v4))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
