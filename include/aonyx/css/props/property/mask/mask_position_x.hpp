/** @brief CSS property: mask-position-x
 *
 * mask-position-x CSS property.
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
struct mask_position_x : types::property_base<"mask-position-x">, constants::global_values<mask_position_x>
{
    using super_property = types::property_base<"mask-position-x">;

    mask_position_x() = delete;
    mask_position_x(const std::string_view s) : super_property(std::string(s))
    {
    }
    mask_position_x(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    mask_position_x(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }

    inline static constexpr types::property_constant left{key, "left"};
    inline static constexpr types::property_constant center{key, "center"};
    inline static constexpr types::property_constant right{key, "right"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
