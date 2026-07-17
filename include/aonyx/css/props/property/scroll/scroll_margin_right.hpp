/** @brief CSS property: scroll-margin-right
 *
 * scroll-margin-right CSS property.
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
struct scroll_margin_right : types::property_base<"scroll-margin-right">, constants::global_values<scroll_margin_right>
{
    using super_property = types::property_base<"scroll-margin-right">;

    scroll_margin_right() = delete;
    scroll_margin_right(std::string_view v) : super_property(std::string(v))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
