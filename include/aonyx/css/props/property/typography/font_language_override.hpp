/** @brief CSS property: font-language-override
 *
 * font-language-override CSS property.
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
struct font_language_override : types::property_base<"font-language-override">,
                                constants::global_values<font_language_override>
{
    using super_property = types::property_base<"font-language-override">;

    font_language_override() = delete;
    font_language_override(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
