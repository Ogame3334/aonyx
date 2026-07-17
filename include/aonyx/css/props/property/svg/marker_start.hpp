/** @brief CSS property: marker-start
 *
 * marker-start CSS property.
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
struct marker_start : types::property_base<"marker-start">, constants::global_values<marker_start>
{
    using super_property = types::property_base<"marker-start">;

    marker_start() = delete;
    marker_start(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
