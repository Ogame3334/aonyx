/** @brief CSS property: outline-width
 *
 * outline-width CSS property.
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
struct outline_width : types::property_base<"outline-width">, constants::global_values<outline_width>
{
    using super_property = types::property_base<"outline-width">;

    outline_width() = delete;
    outline_width(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant thin{key, "thin"};
    inline static constexpr types::property_constant medium{key, "medium"};
    inline static constexpr types::property_constant thick{key, "thick"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
