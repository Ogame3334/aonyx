/** @brief CSS property: fill-rule
 *
 * fill-rule CSS property.
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
struct fill_rule : types::property_base<"fill-rule">, constants::global_values<fill_rule>
{
    using super_property = types::property_base<"fill-rule">;

    fill_rule() = delete;
    fill_rule(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant nonzero{key, "nonzero"};
    inline static constexpr types::property_constant evenodd{key, "evenodd"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
