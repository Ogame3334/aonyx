/** @brief CSS property: counter-reset
 *
 * counter-reset CSS property.
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
struct counter_reset : types::property_base<"counter-reset">, constants::global_values<counter_reset>
{
    using super_property = types::property_base<"counter-reset">;

    counter_reset() = delete;
    counter_reset(const std::string_view s) : super_property(std::string(s))
    {
    }
    counter_reset(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    counter_reset(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
