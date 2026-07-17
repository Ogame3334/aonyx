/** @brief CSS property: mask-mode
 *
 * mask-mode CSS property.
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
struct mask_mode : types::property_base<"mask-mode">, constants::global_values<mask_mode>
{
    using super_property = types::property_base<"mask-mode">;

    mask_mode() = delete;
    mask_mode(const std::string_view s) : super_property(std::string(s))
    {
    }
    mask_mode(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant alpha{key, "alpha"};
    inline static constexpr types::property_constant luminance{key, "luminance"};
    inline static constexpr types::property_constant match_source{key, "match-source"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
