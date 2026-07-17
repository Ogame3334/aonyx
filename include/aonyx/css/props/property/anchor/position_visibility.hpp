/** @brief CSS property: position-visibility
 *
 * position-visibility CSS property.
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
struct position_visibility : types::property_base<"position-visibility">, constants::global_values<position_visibility>
{
    using super_property = types::property_base<"position-visibility">;

    position_visibility() = delete;
    position_visibility(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant always{key, "always"};
    inline static constexpr types::property_constant anchors_visible{key, "anchors-visible"};
    inline static constexpr types::property_constant no_overflow{key, "no-overflow"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
