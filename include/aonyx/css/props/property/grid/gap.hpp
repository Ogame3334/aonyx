/** @brief CSS property: gap
 *
 * gap CSS property.
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
struct gap : types::property_base<"gap">, constants::global_values<gap>
{
    using super_property = types::property_base<"gap">;

    gap() = delete;
    gap(std::string_view v) : super_property(std::string(v))
    {
    }
    gap(std::string_view row, std::string_view column) : super_property(std::format("{} {}", row, column))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
