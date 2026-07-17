/** @brief CSS property: font
 *
 * font CSS property.
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
struct font : types::property_base<"font">, constants::global_values<font>
{
    using super_property = types::property_base<"font">;

    font() = delete;
    font(const std::string_view s) : super_property(std::string(s))
    {
    }
    font(std::string_view style, std::string_view weight, util::numerical size, std::string_view family)
        : super_property(std::format("{} {} {} {}", style, weight, size, family))
    {
    }

    inline static constexpr types::property_constant caption{key, "caption"};
    inline static constexpr types::property_constant icon{key, "icon"};
    inline static constexpr types::property_constant menu{key, "menu"};
    inline static constexpr types::property_constant message_box{key, "message-box"};
    inline static constexpr types::property_constant small_caption{key, "small-caption"};
    inline static constexpr types::property_constant status_bar{key, "status-bar"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
