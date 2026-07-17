/** @brief CSS property: fill
 *
 * fill CSS property.
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
struct fill : types::property_base<"fill">, constants::global_values<fill>
{
    using super_property = types::property_base<"fill">;

    fill() = delete;
    fill(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant context_fill{key, "context-fill"};
    inline static constexpr types::property_constant context_stroke{key, "context-stroke"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
