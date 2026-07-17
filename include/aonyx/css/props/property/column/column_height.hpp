/** @brief CSS property: column-height
 *
 * column-height CSS property.
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
struct column_height : types::property_base<"column-height">, constants::global_values<column_height>
{
    using super_property = types::property_base<"column-height">;

    column_height() = delete;
    column_height(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
