/** @brief CSS property: background-position-y
 *
 * background-position-y CSS property.
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
struct background_position_y : types::property_base<"background-position-y">,
                               constants::global_values<background_position_y>
{
    using super_property = types::property_base<"background-position-y">;

    background_position_y() = delete;
    background_position_y(std::string_view v) : super_property(std::string(v))
    {
    }
    background_position_y(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant top{key, "top"};
    inline static constexpr types::property_constant center{key, "center"};
    inline static constexpr types::property_constant bottom{key, "bottom"};
    inline static constexpr types::property_constant y_start{key, "y-start"};
    inline static constexpr types::property_constant y_end{key, "y-end"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
