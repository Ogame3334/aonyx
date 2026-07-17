/** @brief CSS property: border-bottom-width
 *
 * border-bottom-width CSS property.
 */
#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/css/props/types/property.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace property
{
struct border_bottom_width : types::property_base<"border-bottom-width">, constants::global_values<border_bottom_width>
{
    using super_property = types::property_base<"border-bottom-width">;

    border_bottom_width() = delete;
    border_bottom_width(const std::string_view s) : super_property(std::string(s))
    {
    }
    border_bottom_width(util::numerical w) : super_property(w.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
