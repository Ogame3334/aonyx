/** @brief CSS property: border-top-width
 *
 * border-top-width CSS property.
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
struct border_top_width : types::property_base<"border-top-width">, constants::global_values<border_top_width>
{
    using super_property = types::property_base<"border-top-width">;

    border_top_width() = delete;
    border_top_width(const std::string_view s) : super_property(std::string(s))
    {
    }
    border_top_width(util::numerical w) : super_property(w.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
