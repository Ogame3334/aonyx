/** @brief CSS property: offset-anchor
 *
 * offset-anchor CSS property.
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
struct offset_anchor : types::property_base<"offset-anchor">, constants::global_values<offset_anchor>
{
    using super_property = types::property_base<"offset-anchor">;

    offset_anchor() = delete;
    offset_anchor(std::string_view v) : super_property(std::string(v))
    {
    }
    offset_anchor(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
