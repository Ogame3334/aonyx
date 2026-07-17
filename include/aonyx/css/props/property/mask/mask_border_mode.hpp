/** @brief CSS property: mask-border-mode
 *
 * mask-border-mode CSS property.
 */
#pragma once

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
struct mask_border_mode : types::property_base<"mask-border-mode">, constants::global_values<mask_border_mode>
{
    using super_property = types::property_base<"mask-border-mode">;

    mask_border_mode() = delete;
    mask_border_mode(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant luminance{key, "luminance"};
    inline static constexpr types::property_constant alpha{key, "alpha"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
