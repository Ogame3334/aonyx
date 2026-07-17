/** @brief CSS property: reading-order
 *
 * reading-order CSS property.
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
struct reading_order : types::property_base<"reading-order">, constants::global_values<reading_order>
{
    using super_property = types::property_base<"reading-order">;

    reading_order() = delete;
    reading_order(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant reverse{key, "reverse"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
