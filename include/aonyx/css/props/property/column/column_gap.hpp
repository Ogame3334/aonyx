/** @brief CSS property: column-gap
 *
 * column-gap CSS property.
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
struct column_gap : types::property_base<"column-gap">, constants::global_values<column_gap>
{
    using super_property = types::property_base<"column-gap">;

    column_gap() = delete;
    column_gap(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
