/** @brief CSS property: rx
 *
 * rx CSS property.
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
struct rx : types::property_base<"rx">, constants::global_values<rx>
{
    using super_property = types::property_base<"rx">;

    rx() = delete;
    rx(std::string_view v) : super_property(std::string(v))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
