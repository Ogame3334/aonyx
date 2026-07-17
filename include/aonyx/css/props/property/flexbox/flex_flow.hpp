/** @brief CSS property: flex-flow
 *
 * flex-flow CSS property.
 */
#pragma once

#include <format>
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
struct flex_flow : types::property_base<"flex-flow">, constants::global_values<flex_flow>
{
    using super_property = types::property_base<"flex-flow">;

    flex_flow() = delete;
    flex_flow(const std::string_view s) : super_property(std::string(s))
    {
    }
    flex_flow(std::string_view direction, std::string_view wrap) : super_property(std::format("{} {}", direction, wrap))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
