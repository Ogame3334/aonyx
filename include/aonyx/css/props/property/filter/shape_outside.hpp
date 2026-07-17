/** @brief CSS property: shape-outside
 *
 * shape-outside CSS property.
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
struct shape_outside : types::property_base<"shape-outside">, constants::global_values<shape_outside>
{
    using super_property = types::property_base<"shape-outside">;

    shape_outside() = delete;
    shape_outside(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant margin_box{key, "margin-box"};
    inline static constexpr types::property_constant content_box{key, "content-box"};
    inline static constexpr types::property_constant border_box{key, "border-box"};
    inline static constexpr types::property_constant padding_box{key, "padding-box"};
    inline static constexpr types::property_constant fill_box{key, "fill-box"};
    inline static constexpr types::property_constant stroke_box{key, "stroke-box"};
    inline static constexpr types::property_constant view_box{key, "view-box"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
