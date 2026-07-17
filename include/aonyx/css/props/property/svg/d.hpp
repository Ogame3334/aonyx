/** @brief CSS property: d
 *
 * d CSS property.
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
struct d : types::property_base<"d">, constants::global_values<d>
{
    using super_property = types::property_base<"d">;

    d() = delete;
    d(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
