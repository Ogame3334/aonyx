/** @brief CSS property: object-position
 *
 * object-position CSS property.
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
struct object_position : types::property_base<"object-position">, constants::global_values<object_position>
{
    using super_property = types::property_base<"object-position">;

    object_position() = delete;
    object_position(std::string_view v) : super_property(std::string(v))
    {
    }
    object_position(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    object_position(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }
    object_position(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {} {} {}", v1, v2, v3, v4))
    {
    }

    inline static constexpr types::property_constant left{key, "left"};
    inline static constexpr types::property_constant center{key, "center"};
    inline static constexpr types::property_constant right{key, "right"};
    inline static constexpr types::property_constant top{key, "top"};
    inline static constexpr types::property_constant bottom{key, "bottom"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
