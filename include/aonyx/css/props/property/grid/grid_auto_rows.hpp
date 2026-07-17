/** @brief CSS property: grid-auto-rows
 *
 * grid-auto-rows CSS property.
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
struct grid_auto_rows : types::property_base<"grid-auto-rows">, constants::global_values<grid_auto_rows>
{
    using super_property = types::property_base<"grid-auto-rows">;

    grid_auto_rows() = delete;
    grid_auto_rows(const std::string_view s) : super_property(std::string(s))
    {
    }
    grid_auto_rows(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    grid_auto_rows(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
