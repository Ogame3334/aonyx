/** @brief CSS property: outline-color
 *
 * outline-color CSS property.
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
struct outline_color : types::property_base<"outline-color">, constants::global_values<outline_color>
{
    using super_property = types::property_base<"outline-color">;

    outline_color() = delete;
    outline_color(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
