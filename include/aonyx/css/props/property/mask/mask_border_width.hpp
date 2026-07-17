/** @brief CSS property: mask-border-width
 *
 * mask-border-width CSS property.
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
struct mask_border_width : types::property_base<"mask-border-width">, constants::global_values<mask_border_width>
{
    using super_property = types::property_base<"mask-border-width">;

    mask_border_width() = delete;
    mask_border_width(const std::string_view s) : super_property(std::string(s))
    {
    }
    mask_border_width(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    mask_border_width(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }
    mask_border_width(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {} {} {}", v1, v2, v3, v4))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
