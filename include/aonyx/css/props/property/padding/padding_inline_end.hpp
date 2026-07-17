/** @brief CSS property: padding-inline-end
 *
 * padding-inline-end CSS property.
 */
#pragma once

#include <string>
#include <string_view>
#include <format>

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
struct padding_inline_end : types::property_base<"padding-inline-end">, constants::global_values<padding_inline_end>
{
    using super_property = types::property_base<"padding-inline-end">;

    padding_inline_end() = delete;
    padding_inline_end(const std::string_view s) : super_property(std::string(s))
    {
    }
    padding_inline_end(util::numerical e) : super_property(e.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
