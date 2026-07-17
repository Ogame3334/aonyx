/** @brief CSS property: cy
 *
 * cy CSS property.
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
struct cy : types::property_base<"cy">, constants::global_values<cy>
{
    using super_property = types::property_base<"cy">;

    cy() = delete;
    cy(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
