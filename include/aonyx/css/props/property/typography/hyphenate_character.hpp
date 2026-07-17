/** @brief CSS property: hyphenate-character
 *
 * hyphenate-character CSS property.
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
struct hyphenate_character : types::property_base<"hyphenate-character">, constants::global_values<hyphenate_character>
{
    using super_property = types::property_base<"hyphenate-character">;

    hyphenate_character() = delete;
    hyphenate_character(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
