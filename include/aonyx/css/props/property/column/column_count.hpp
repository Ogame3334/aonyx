/** @brief CSS property: column-count
 *
 * column-count CSS property.
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
struct column_count : types::property_base<"column-count">, constants::global_values<column_count>
{
    using super_property = types::property_base<"column-count">;

    column_count() = delete;
    column_count(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
