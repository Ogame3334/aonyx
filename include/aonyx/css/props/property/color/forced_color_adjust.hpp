/** @brief CSS property: forced-color-adjust
 *
 * forced-color-adjust CSS property.
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
struct forced_color_adjust : types::property_base<"forced-color-adjust">, constants::global_values<forced_color_adjust>
{
    using super_property = types::property_base<"forced-color-adjust">;

    forced_color_adjust() = delete;
    forced_color_adjust(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
