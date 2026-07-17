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
    marker_mid(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
