/** @brief CSS property: padding-right
 *
 * padding-right CSS property.
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
struct padding_right : types::property_base<"padding-right">, constants::global_values<padding_right>
{
    using super_property = types::property_base<"padding-right">;

    padding_right() = delete;
    padding_right(const std::string_view s) : super_property(std::string(s))
    {
    }
    padding_right(util::numerical r) : super_property(r.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
