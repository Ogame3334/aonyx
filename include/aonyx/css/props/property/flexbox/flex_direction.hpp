/** @brief CSS property: flex-direction
 *
 * flex-direction CSS property.
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
struct flex_direction : types::property_base<"flex-direction">, constants::global_values<flex_direction>
{
    using super_property = types::property_base<"flex-direction">;

    flex_direction() = delete;
    flex_direction(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant row{key, "row"};
    inline static constexpr types::property_constant row_reverse{key, "row-reverse"};
    inline static constexpr types::property_constant column{key, "column"};
    inline static constexpr types::property_constant column_reverse{key, "column-reverse"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
