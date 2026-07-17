/** @brief CSS property: overscroll-behavior-inline
 *
 * overscroll-behavior-inline CSS property.
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
struct overscroll_behavior_inline : types::property_base<"overscroll-behavior-inline">,
                                    constants::global_values<overscroll_behavior_inline>
{
    using super_property = types::property_base<"overscroll-behavior-inline">;

    overscroll_behavior_inline() = delete;
    overscroll_behavior_inline(const std::string_view s) : super_property(std::string(s))
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
