/** @brief CSS property: scrollbar-gutter
 *
 * scrollbar-gutter CSS property.
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
struct scrollbar_gutter : types::property_base<"scrollbar-gutter">, constants::global_values<scrollbar_gutter>
{
    using super_property = types::property_base<"scrollbar-gutter">;

    scrollbar_gutter() = delete;
    scrollbar_gutter(const std::string_view s) : super_property(std::string(s))
    {
    }
    scrollbar_gutter(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant stable{key, "stable"};
    inline static constexpr types::property_constant both_edges{key, "both-edges"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
