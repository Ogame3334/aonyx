/** @brief CSS property: border-collapse
 *
 * border-collapse CSS property.
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
struct border_collapse : types::property_base<"border-collapse">, constants::global_values<border_collapse>
{
    using super_property = types::property_base<"border-collapse">;

    border_collapse() = delete;
    border_collapse(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant separate{key, "separate"};
    inline static constexpr types::property_constant collapse{key, "collapse"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
