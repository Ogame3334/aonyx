/** @brief CSS property: timeline-scope
 *
 * timeline-scope CSS property.
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
struct timeline_scope : types::property_base<"timeline-scope">, constants::global_values<timeline_scope>
{
    using super_property = types::property_base<"timeline-scope">;

    timeline_scope() = delete;
    timeline_scope(std::string_view v) : super_property(std::string(v))
    {
    }
    timeline_scope(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
