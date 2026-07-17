/** @brief CSS property: grid-row
 *
 * grid-row CSS property.
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
struct grid_row : types::property_base<"grid-row">, constants::global_values<grid_row>
{
    using super_property = types::property_base<"grid-row">;

    grid_row() = delete;
    grid_row(std::string_view start, std::string_view end) : super_property(std::format("{} / {}", start, end))
    {
    }
    grid_row(std::string_view start) : super_property(std::string(start))
    {
    }

    inline static constexpr types::property_constant span{key, "span"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
