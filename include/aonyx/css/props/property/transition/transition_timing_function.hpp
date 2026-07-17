/** @brief CSS property: transition-timing-function
 *
 * transition-timing-function CSS property.
 */
#pragma once

#include <format>
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
struct transition_timing_function : types::property_base<"transition-timing-function">,
                                    constants::global_values<transition_timing_function>
{
    using super_property = types::property_base<"transition-timing-function">;

    transition_timing_function() = delete;
    transition_timing_function(const std::string_view s) : super_property(std::string(s))
    {
    }
    transition_timing_function(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }
    transition_timing_function(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{}, {}, {}", v1, v2, v3))
    {
    }

    inline static constexpr types::property_constant ease{key, "ease"};
    inline static constexpr types::property_constant linear{key, "linear"};
    inline static constexpr types::property_constant ease_in{key, "ease-in"};
    inline static constexpr types::property_constant ease_out{key, "ease-out"};
    inline static constexpr types::property_constant ease_in_out{key, "ease-in-out"};
    inline static constexpr types::property_constant step_start{key, "step-start"};
    inline static constexpr types::property_constant step_end{key, "step-end"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
