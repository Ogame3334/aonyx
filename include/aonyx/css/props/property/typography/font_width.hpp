/** @brief CSS property: font-width
 *
 * font-width CSS property.
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
struct font_width : types::property_base<"font-width">, constants::global_values<font_width>
{
    using super_property = types::property_base<"font-width">;

    font_width() = delete;
    font_width(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant ultra_condensed{key, "ultra-condensed"};
    inline static constexpr types::property_constant extra_condensed{key, "extra-condensed"};
    inline static constexpr types::property_constant condensed{key, "condensed"};
    inline static constexpr types::property_constant semi_condensed{key, "semi-condensed"};
    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant semi_expanded{key, "semi-expanded"};
    inline static constexpr types::property_constant expanded{key, "expanded"};
    inline static constexpr types::property_constant extra_expanded{key, "extra-expanded"};
    inline static constexpr types::property_constant ultra_expanded{key, "ultra-expanded"};
    inline static constexpr types::property_constant wider{key, "wider"};
    inline static constexpr types::property_constant narrower{key, "narrower"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
