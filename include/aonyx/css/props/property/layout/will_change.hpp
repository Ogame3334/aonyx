/** @brief CSS property: will-change
 *
 * will-change CSS property.
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
struct will_change : types::property_base<"will-change">, constants::global_values<will_change>
{
    using super_property = types::property_base<"will-change">;

    will_change() = delete;
    will_change(std::string_view v) : super_property(std::string(v))
    {
    }
    will_change(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
