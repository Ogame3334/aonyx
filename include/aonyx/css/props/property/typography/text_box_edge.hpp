/** @brief CSS property: text-box-edge
 *
 * text-box-edge CSS property.
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
struct text_box_edge : types::property_base<"text-box-edge">, constants::global_values<text_box_edge>
{
    using super_property = types::property_base<"text-box-edge">;

    text_box_edge() = delete;
    text_box_edge(const std::string_view s) : super_property(std::string(s))
    {
    }
    text_box_edge(std::string_view over, std::string_view under) : super_property(std::format("{} {}", over, under))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant cap{key, "cap"};
    inline static constexpr types::property_constant ex{key, "ex"};
    inline static constexpr types::property_constant alphabetic{key, "alphabetic"};
    inline static constexpr types::property_constant text{key, "text"};
    inline static constexpr types::property_constant overshoot{key, "overshoot"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
