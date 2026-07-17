/** @brief CSS property: border-right-width
 *
 * border-right-width CSS property.
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
struct border_right_width : types::property_base<"border-right-width">, constants::global_values<border_right_width>
{
    using super_property = types::property_base<"border-right-width">;

    border_right_width() = delete;
    border_right_width(const std::string_view s) : super_property(std::string(s))
    {
    }
    border_right_width(util::numerical w) : super_property(w.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
