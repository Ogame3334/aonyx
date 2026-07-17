/** @brief CSS property: anchor-scope
 *
 * anchor-scope CSS property.
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
struct anchor_scope : types::property_base<"anchor-scope">, constants::global_values<anchor_scope>
{
    using super_property = types::property_base<"anchor-scope">;

    anchor_scope() = delete;
    anchor_scope(const std::string_view s) : super_property(std::string(s))
    {
    }
    anchor_scope(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
