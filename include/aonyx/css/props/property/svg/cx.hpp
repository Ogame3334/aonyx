/** @brief CSS property: cx
 *
 * cx CSS property.
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
struct cx : types::property_base<"cx">, constants::global_values<cx>
{
    using super_property = types::property_base<"cx">;

    cx() = delete;
    cx(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
