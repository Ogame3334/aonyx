/** @brief CSS property: background-origin
 *
 * background-origin CSS property.
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
struct background_origin : types::property_base<"background-origin">, constants::global_values<background_origin>
{
    using super_property = types::property_base<"background-origin">;

    background_origin() = delete;
    background_origin(const std::string_view s) : super_property(std::string(s))
    {
    }
    background_origin(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }
    background_origin(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{}, {}, {}", v1, v2, v3))
    {
    }

    inline static constexpr types::property_constant border_box{key, "border-box"};
    inline static constexpr types::property_constant padding_box{key, "padding-box"};
    inline static constexpr types::property_constant content_box{key, "content-box"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
