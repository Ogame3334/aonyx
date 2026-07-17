/** @brief CSS property: reading-flow
 *
 * reading-flow CSS property.
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
struct reading_flow : types::property_base<"reading-flow">, constants::global_values<reading_flow>
{
    using super_property = types::property_base<"reading-flow">;

    reading_flow() = delete;
    reading_flow(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant grid_rows{key, "grid-rows"};
    inline static constexpr types::property_constant grid_columns{key, "grid-columns"};
    inline static constexpr types::property_constant flow_columns{key, "flow-columns"};
    inline static constexpr types::property_constant flow_root{key, "flow-root"};
    inline static constexpr types::property_constant flex_visual{key, "flex-visual"};
    inline static constexpr types::property_constant flex_flow{key, "flex-flow"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
