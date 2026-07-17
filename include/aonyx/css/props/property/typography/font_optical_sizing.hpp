/** @brief CSS property: font-optical-sizing
 *
 * font-optical-sizing CSS property.
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
struct font_optical_sizing : types::property_base<"font-optical-sizing">, constants::global_values<font_optical_sizing>
{
    using super_property = types::property_base<"font-optical-sizing">;

    font_optical_sizing() = delete;
    font_optical_sizing(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
