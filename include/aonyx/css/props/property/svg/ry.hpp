/** @brief CSS property: ry
 *
 * ry CSS property.
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
struct ry : types::property_base<"ry">, constants::global_values<ry>
{
    using super_property = types::property_base<"ry">;

    ry() = delete;
    ry(std::string_view v) : super_property(std::string(v))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
