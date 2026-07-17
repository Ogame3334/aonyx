/** @brief CSS property: border-inline-start-width
 *
 * border-inline-start-width CSS property.
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
struct border_inline_start_width : types::property_base<"border-inline-start-width">,
                                   constants::global_values<border_inline_start_width>
{
    using super_property = types::property_base<"border-inline-start-width">;

    border_inline_start_width() = delete;
    border_inline_start_width(const std::string_view s) : super_property(std::string(s))
    {
    }
    border_inline_start_width(util::numerical w) : super_property(w.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
