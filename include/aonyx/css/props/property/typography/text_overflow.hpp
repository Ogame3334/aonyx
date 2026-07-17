/** @brief CSS property: text-overflow
 *
 * text-overflow CSS property.
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
struct text_overflow : types::property_base<"text-overflow">, constants::global_values<text_overflow>
{
    using super_property = types::property_base<"text-overflow">;

    text_overflow() = delete;
    text_overflow(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant clip{key, "clip"};
    inline static constexpr types::property_constant ellipsis{key, "ellipsis"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
