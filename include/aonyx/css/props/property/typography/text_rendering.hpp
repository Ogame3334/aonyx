/** @brief CSS property: text-rendering
 *
 * text-rendering CSS property.
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
struct text_rendering : types::property_base<"text-rendering">, constants::global_values<text_rendering>
{
    using super_property = types::property_base<"text-rendering">;

    text_rendering() = delete;
    text_rendering(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant optimize_speed{key, "optimizeSpeed"};
    inline static constexpr types::property_constant optimize_legibility{key, "optimizeLegibility"};
    inline static constexpr types::property_constant geometric_precision{key, "geometricPrecision"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
