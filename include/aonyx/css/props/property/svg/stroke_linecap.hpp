/** @brief CSS property: stroke-linecap
 *
 * stroke-linecap CSS property.
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
struct stroke_linecap : types::property_base<"stroke-linecap">, constants::global_values<stroke_linecap>
{
    using super_property = types::property_base<"stroke-linecap">;

    stroke_linecap() = delete;
    stroke_linecap(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant butt{key, "butt"};
    inline static constexpr types::property_constant round{key, "round"};
    inline static constexpr types::property_constant square{key, "square"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
