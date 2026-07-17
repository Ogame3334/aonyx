/** @brief CSS property: outline-offset
 *
 * outline-offset CSS property.
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
struct outline_offset : types::property_base<"outline-offset">, constants::global_values<outline_offset>
{
    using super_property = types::property_base<"outline-offset">;

    outline_offset() = delete;
    outline_offset(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
