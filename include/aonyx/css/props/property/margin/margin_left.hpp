/** @brief CSS property: margin-left
 *
 * margin-left CSS property.
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
struct margin_left : types::property_base<"margin-left">, constants::global_values<margin_left>
{
    using super_property = types::property_base<"margin-left">;

    margin_left() = delete;
    margin_left(const std::string_view s) : super_property(std::string(s))
    {
    }
    margin_left(util::numerical l) : super_property(l.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
