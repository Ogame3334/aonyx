/** @brief CSS property: position-anchor
 *
 * position-anchor CSS property.
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
struct position_anchor : types::property_base<"position-anchor">, constants::global_values<position_anchor>
{
    using super_property = types::property_base<"position-anchor">;

    position_anchor() = delete;
    position_anchor(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
