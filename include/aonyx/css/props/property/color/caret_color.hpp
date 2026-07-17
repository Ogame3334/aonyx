/** @brief CSS property: caret-color
 *
 * caret-color CSS property.
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
struct caret_color : types::property_base<"caret-color">, constants::global_values<caret_color>
{
    using super_property = types::property_base<"caret-color">;

    caret_color() = delete;
    caret_color(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
