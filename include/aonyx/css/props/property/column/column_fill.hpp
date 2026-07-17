/** @brief CSS property: column-fill
 *
 * column-fill CSS property.
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
struct column_fill : types::property_base<"column-fill">, constants::global_values<column_fill>
{
    using super_property = types::property_base<"column-fill">;

    column_fill() = delete;
    column_fill(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant balance{key, "balance"};
    inline static constexpr types::property_constant balance_all{key, "balance-all"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
