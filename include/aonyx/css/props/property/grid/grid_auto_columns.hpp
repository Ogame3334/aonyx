/** @brief CSS property: grid-auto-columns
 *
 * grid-auto-columns CSS property.
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
struct grid_auto_columns : types::property_base<"grid-auto-columns">, constants::global_values<grid_auto_columns>
{
    using super_property = types::property_base<"grid-auto-columns">;

    grid_auto_columns() = delete;
    grid_auto_columns(std::string_view v) : super_property(std::string(v))
    {
    }
    grid_auto_columns(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    grid_auto_columns(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
