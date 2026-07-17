/** @brief CSS property: transform-box
 *
 * transform-box CSS property.
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
struct transform_box : types::property_base<"transform-box">, constants::global_values<transform_box>
{
    using super_property = types::property_base<"transform-box">;

    transform_box() = delete;
    transform_box(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant content_box{key, "content-box"};
    inline static constexpr types::property_constant border_box{key, "border-box"};
    inline static constexpr types::property_constant fill_box{key, "fill-box"};
    inline static constexpr types::property_constant stroke_box{key, "stroke-box"};
    inline static constexpr types::property_constant view_box{key, "view-box"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
