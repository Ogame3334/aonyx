/** @brief CSS property: border-inline-end-style
 *
 * border-inline-end-style CSS property.
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
struct border_inline_end_style : types::property_base<"border-inline-end-style">,
                                 constants::global_values<border_inline_end_style>
{
    using super_property = types::property_base<"border-inline-end-style">;

    border_inline_end_style() = delete;
    border_inline_end_style(const std::string_view s) : super_property(std::string(s))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
