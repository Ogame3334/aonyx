/** @brief CSS property: writing-mode
 *
 * writing-mode CSS property.
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
struct writing_mode : types::property_base<"writing-mode">, constants::global_values<writing_mode>
{
    using super_property = types::property_base<"writing-mode">;

    writing_mode() = delete;
    writing_mode(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant horizontal_tb{key, "horizontal-tb"};
    inline static constexpr types::property_constant vertical_rl{key, "vertical-rl"};
    inline static constexpr types::property_constant vertical_lr{key, "vertical-lr"};
    inline static constexpr types::property_constant sideways_rl{key, "sideways-rl"};
    inline static constexpr types::property_constant sideways_lr{key, "sideways-lr"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
