/** @brief CSS property: shape-margin
 *
 * shape-margin CSS property.
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
struct shape_margin : types::property_base<"shape-margin">, constants::global_values<shape_margin>
{
    using super_property = types::property_base<"shape-margin">;

    shape_margin() = delete;
    shape_margin(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
