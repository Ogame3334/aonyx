/** @brief CSS property: border-top-right-radius
 *
 * border-top-right-radius CSS property.
 */
#pragma once

#include <format>
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
struct border_top_right_radius : types::property_base<"border-top-right-radius">,
                                 constants::global_values<border_top_right_radius>
{
    using super_property = types::property_base<"border-top-right-radius">;

    border_top_right_radius() = delete;
    border_top_right_radius(util::numerical r) : super_property(r.to_string())
    {
    }
    border_top_right_radius(util::numerical horizontal, util::numerical vertical)
        : super_property(std::format("{} {}", horizontal, vertical))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
