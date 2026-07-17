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
    rx(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
