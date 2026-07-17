/** @brief CSS property: visibility
 *
 * visibility CSS property.
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
struct visibility : types::property_base<"visibility">, constants::global_values<visibility>
{
    using super_property = types::property_base<"visibility">;

    visibility() = delete;
    visibility(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant visible{key, "visible"};
    inline static constexpr types::property_constant hidden{key, "hidden"};
    inline static constexpr types::property_constant collapse{key, "collapse"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
