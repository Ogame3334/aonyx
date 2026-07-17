/** @brief CSS property: clip-rule
 *
 * clip-rule CSS property.
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
struct clip_rule : types::property_base<"clip-rule">, constants::global_values<clip_rule>
{
    using super_property = types::property_base<"clip-rule">;

    clip_rule() = delete;
    clip_rule(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant nonzero{key, "nonzero"};
    inline static constexpr types::property_constant evenodd{key, "evenodd"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
