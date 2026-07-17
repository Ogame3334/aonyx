/** @brief CSS property: stroke-miterlimit
 *
 * stroke-miterlimit CSS property.
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
struct stroke_miterlimit : types::property_base<"stroke-miterlimit">, constants::global_values<stroke_miterlimit>
{
    using super_property = types::property_base<"stroke-miterlimit">;

    stroke_miterlimit() = delete;
    stroke_miterlimit(std::string_view v) : super_property(std::string(v))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
