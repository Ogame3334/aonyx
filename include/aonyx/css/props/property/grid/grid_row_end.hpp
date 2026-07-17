/** @brief CSS property: grid-row-end
 *
 * grid-row-end CSS property.
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
struct grid_row_end : types::property_base<"grid-row-end">, constants::global_values<grid_row_end>
{
    using super_property = types::property_base<"grid-row-end">;

    grid_row_end() = delete;
    grid_row_end(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant span{key, "span"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
