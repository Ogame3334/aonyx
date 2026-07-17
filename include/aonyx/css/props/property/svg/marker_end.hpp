/** @brief CSS property: marker-end
 *
 * marker-end CSS property.
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
struct marker_end : types::property_base<"marker-end">, constants::global_values<marker_end>
{
    using super_property = types::property_base<"marker-end">;

    marker_end() = delete;
    marker_end(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
