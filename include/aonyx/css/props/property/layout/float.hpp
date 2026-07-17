/** @brief CSS property: float
 *
 * float CSS property.
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
struct float_ : types::property_base<"float">, constants::global_values<float_>
{
    using super_property = types::property_base<"float">;

    float_() = delete;
    float_(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant left{key, "left"};
    inline static constexpr types::property_constant right{key, "right"};
    inline static constexpr types::property_constant inline_start{key, "inline-start"};
    inline static constexpr types::property_constant inline_end{key, "inline-end"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
