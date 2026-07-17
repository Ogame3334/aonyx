/** @brief CSS property: offset-distance
 *
 * offset-distance CSS property.
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
struct offset_distance : types::property_base<"offset-distance">, constants::global_values<offset_distance>
{
    using super_property = types::property_base<"offset-distance">;

    offset_distance() = delete;
    offset_distance(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
