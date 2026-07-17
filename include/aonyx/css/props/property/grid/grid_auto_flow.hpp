/** @brief CSS property: grid-auto-flow
 *
 * grid-auto-flow CSS property.
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
struct grid_auto_flow : types::property_base<"grid-auto-flow">, constants::global_values<grid_auto_flow>
{
    using super_property = types::property_base<"grid-auto-flow">;

    grid_auto_flow() = delete;
    grid_auto_flow(const std::string_view s) : super_property(std::string(s))
    {
    }
    grid_auto_flow(std::string_view direction, std::string_view packing)
        : super_property(std::format("{} {}", direction, packing))
    {
    }

    inline static constexpr types::property_constant row{key, "row"};
    inline static constexpr types::property_constant column{key, "column"};
    inline static constexpr types::property_constant dense{key, "dense"};
    inline static constexpr types::property_constant row_dense{key, "row dense"};
    inline static constexpr types::property_constant column_dense{key, "column dense"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
