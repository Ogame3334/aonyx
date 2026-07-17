/** @brief CSS property: border-bottom-right-radius
 *
 * border-bottom-right-radius CSS property.
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
struct border_bottom_right_radius : types::property_base<"border-bottom-right-radius">,
                                    constants::global_values<border_bottom_right_radius>
{
    using super_property = types::property_base<"border-bottom-right-radius">;

    border_bottom_right_radius() = delete;
    border_bottom_right_radius(const std::string_view s) : super_property(std::string(s))
    {
    }
    border_bottom_right_radius(util::numerical r) : super_property(r.to_string())
    {
    }
    border_bottom_right_radius(util::numerical horizontal, util::numerical vertical)
        : super_property(std::format("{} {}", horizontal, vertical))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
