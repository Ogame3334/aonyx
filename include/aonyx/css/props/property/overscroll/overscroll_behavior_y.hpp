/** @brief CSS property: overscroll-behavior-y
 *
 * overscroll-behavior-y CSS property.
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
struct overscroll_behavior_y : types::property_base<"overscroll-behavior-y">,
                               constants::global_values<overscroll_behavior_y>
{
    using super_property = types::property_base<"overscroll-behavior-y">;

    overscroll_behavior_y() = delete;
    overscroll_behavior_y(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant contain{key, "contain"};
    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
