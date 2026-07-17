/** @brief CSS property: font-variant-emoji
 *
 * font-variant-emoji CSS property.
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
struct font_variant_emoji : types::property_base<"font-variant-emoji">, constants::global_values<font_variant_emoji>
{
    using super_property = types::property_base<"font-variant-emoji">;

    font_variant_emoji() = delete;
    font_variant_emoji(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant text{key, "text"};
    inline static constexpr types::property_constant emoji{key, "emoji"};
    inline static constexpr types::property_constant unicode{key, "unicode"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
