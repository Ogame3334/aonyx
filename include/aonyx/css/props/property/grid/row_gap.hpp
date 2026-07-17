/** @brief CSS property: row-gap
 *
 * row-gap CSS property.
 */
#pragma once

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
struct row_gap : types::property_base<"row-gap">, constants::global_values<row_gap>
{
    using super_property = types::property_base<"row-gap">;

    row_gap() = delete;
    row_gap(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
