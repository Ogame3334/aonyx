/** @brief CSS property: font-variant-position
 *
 * font-variant-position CSS property.
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
struct font_variant_position : types::property_base<"font-variant-position">,
                               constants::global_values<font_variant_position>
{
    using super_property = types::property_base<"font-variant-position">;

    font_variant_position() = delete;
    font_variant_position(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant sub{key, "sub"};
    inline static constexpr types::property_constant super{key, "super"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
