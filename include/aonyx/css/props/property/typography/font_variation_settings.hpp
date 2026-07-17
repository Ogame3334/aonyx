/** @brief CSS property: font-variation-settings
 *
 * font-variation-settings CSS property.
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
struct font_variation_settings : types::property_base<"font-variation-settings">,
                                 constants::global_values<font_variation_settings>
{
    using super_property = types::property_base<"font-variation-settings">;

    font_variation_settings() = delete;
    font_variation_settings(const std::string_view s) : super_property(std::string(s))
    {
    }
    font_variation_settings(std::string_view tag, std::string_view value)
        : super_property(std::format("\"{}\" {}", tag, value))
    {
    }
    font_variation_settings(std::string_view tag1,
                            std::string_view value1,
                            std::string_view tag2,
                            std::string_view value2)
        : super_property(std::format("\"{}\" {}, \"{}\" {}", tag1, value1, tag2, value2))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
