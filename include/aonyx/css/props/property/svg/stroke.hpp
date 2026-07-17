/** @brief CSS property: stroke
 *
 * stroke CSS property.
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
struct stroke : types::property_base<"stroke">, constants::global_values<stroke>
{
    using super_property = types::property_base<"stroke">;

    stroke() = delete;
    stroke(const std::string_view s) : super_property(std::string(s))
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
