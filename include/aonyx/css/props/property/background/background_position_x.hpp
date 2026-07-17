/** @brief CSS property: background-position-x
 *
 * background-position-x CSS property.
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
struct background_position_x : types::property_base<"background-position-x">,
                               constants::global_values<background_position_x>
{
    using super_property = types::property_base<"background-position-x">;

    background_position_x() = delete;
    background_position_x(std::string_view v) : super_property(std::string(v))
    {
    }
    background_position_x(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant left{key, "left"};
    inline static constexpr types::property_constant center{key, "center"};
    inline static constexpr types::property_constant right{key, "right"};
    inline static constexpr types::property_constant x_start{key, "x-start"};
    inline static constexpr types::property_constant x_end{key, "x-end"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
