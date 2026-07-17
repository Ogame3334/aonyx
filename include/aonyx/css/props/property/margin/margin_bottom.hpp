/** @brief CSS property: margin-bottom
 *
 * margin-bottom CSS property.
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
struct margin_bottom : types::property_base<"margin-bottom">, constants::global_values<margin_bottom>
{
    using super_property = types::property_base<"margin-bottom">;

    margin_bottom() = delete;
    margin_bottom(const std::string_view s) : super_property(std::string(s))
    {
    }
    margin_bottom(util::numerical b) : super_property(b.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
