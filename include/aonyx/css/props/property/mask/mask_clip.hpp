/** @brief CSS property: mask-clip
 *
 * mask-clip CSS property.
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
struct mask_clip : types::property_base<"mask-clip">, constants::global_values<mask_clip>
{
    using super_property = types::property_base<"mask-clip">;

    mask_clip() = delete;
    mask_clip(std::string_view v) : super_property(std::string(v))
    {
    }
    mask_clip(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant content_box{key, "content-box"};
    inline static constexpr types::property_constant border_box{key, "border-box"};
    inline static constexpr types::property_constant padding_box{key, "padding-box"};
    inline static constexpr types::property_constant fill_box{key, "fill-box"};
    inline static constexpr types::property_constant stroke_box{key, "stroke-box"};
    inline static constexpr types::property_constant view_box{key, "view-box"};
    inline static constexpr types::property_constant no_clip{key, "no-clip"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
