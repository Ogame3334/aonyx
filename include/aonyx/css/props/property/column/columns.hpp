/** @brief CSS property: columns
 *
 * columns CSS property.
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
struct columns : types::property_base<"columns">, constants::global_values<columns>
{
    using super_property = types::property_base<"columns">;

    columns() = delete;
    columns(const std::string_view s) : super_property(std::string(s))
    {
    }
    columns(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
