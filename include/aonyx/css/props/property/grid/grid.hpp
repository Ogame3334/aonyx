/** @brief CSS property: grid
 *
 * grid CSS property.
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
struct grid : types::property_base<"grid">, constants::global_values<grid>
{
    using super_property = types::property_base<"grid">;

    grid() = delete;
    grid(std::string_view template_, std::string_view auto_flow)
        : super_property(std::format("{} / {}", template_, auto_flow))
    {
    }
    grid(const std::string_view s) : super_property(std::string(s))
    {
    }
    grid(std::string_view template_, std::string_view auto_flow, std::string_view auto_columns)
        : super_property(std::format("{} / {} / {}", template_, auto_flow, auto_columns))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
