/** @brief CSS property: baseline-shift
 *
 * baseline-shift CSS property.
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
struct baseline_shift : types::property_base<"baseline-shift">, constants::global_values<baseline_shift>
{
    using super_property = types::property_base<"baseline-shift">;

    baseline_shift() = delete;
    baseline_shift(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant sub{key, "sub"};
    inline static constexpr types::property_constant super{key, "super"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
