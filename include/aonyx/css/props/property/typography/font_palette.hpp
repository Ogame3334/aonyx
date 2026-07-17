/** @brief CSS property: font-palette
 *
 * font-palette CSS property.
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
struct font_palette : types::property_base<"font-palette">, constants::global_values<font_palette>
{
    using super_property = types::property_base<"font-palette">;

    font_palette() = delete;
    font_palette(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant light{key, "light"};
    inline static constexpr types::property_constant dark{key, "dark"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
