/** @brief CSS property: border-end-end-radius
 *
 * border-end-end-radius CSS property.
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
struct border_end_end_radius : types::property_base<"border-end-end-radius">,
                               constants::global_values<border_end_end_radius>
{
    using super_property = types::property_base<"border-end-end-radius">;

    border_end_end_radius() = delete;
    border_end_end_radius(util::numerical r) : super_property(r.to_string())
    {
    }
    border_end_end_radius(util::numerical horizontal, util::numerical vertical)
        : super_property(std::format("{} {}", horizontal, vertical))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
