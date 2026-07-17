/** @brief CSS property: scroll-behavior
 *
 * scroll-behavior CSS property.
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
struct scroll_behavior : types::property_base<"scroll-behavior">, constants::global_values<scroll_behavior>
{
    using super_property = types::property_base<"scroll-behavior">;

    scroll_behavior() = delete;
    scroll_behavior(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant smooth{key, "smooth"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
