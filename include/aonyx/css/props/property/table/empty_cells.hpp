/** @brief CSS property: empty-cells
 *
 * empty-cells CSS property.
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
struct empty_cells : types::property_base<"empty-cells">, constants::global_values<empty_cells>
{
    using super_property = types::property_base<"empty-cells">;

    empty_cells() = delete;
    empty_cells(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant show{key, "show"};
    inline static constexpr types::property_constant hide{key, "hide"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
