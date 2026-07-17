/** @brief CSS property: marker-mid
 *
 * marker-mid CSS property.
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
struct marker_mid : types::property_base<"marker-mid">, constants::global_values<marker_mid>
{
    using super_property = types::property_base<"marker-mid">;

    marker_mid() = delete;
    marker_mid(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
