/** @brief CSS property: text-emphasis-position
 *
 * text-emphasis-position CSS property.
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
struct text_emphasis_position : types::property_base<"text-emphasis-position">,
                                constants::global_values<text_emphasis_position>
{
    using super_property = types::property_base<"text-emphasis-position">;

    text_emphasis_position() = delete;
    text_emphasis_position(const std::string_view s) : super_property(std::string(s))
    {
    }
    text_emphasis_position(std::string_view over_under, std::string_view left_right)
        : super_property(std::format("{} {}", over_under, left_right))
    {
    }

    inline static constexpr types::property_constant over{key, "over"};
    inline static constexpr types::property_constant under{key, "under"};
    inline static constexpr types::property_constant right{key, "right"};
    inline static constexpr types::property_constant left{key, "left"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
