/** @brief CSS property: grid-column-start
 *
 * grid-column-start CSS property.
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
struct grid_column_start : types::property_base<"grid-column-start">, constants::global_values<grid_column_start>
{
    using super_property = types::property_base<"grid-column-start">;

    grid_column_start() = delete;
    grid_column_start(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant span{key, "span"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
