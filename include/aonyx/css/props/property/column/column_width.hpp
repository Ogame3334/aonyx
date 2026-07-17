/** @brief CSS property: column-width
 *
 * column-width CSS property.
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
struct column_width : types::property_base<"column-width">, constants::global_values<column_width>
{
    using super_property = types::property_base<"column-width">;

    column_width() = delete;
    column_width(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
