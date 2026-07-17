/** @brief CSS property: position-try-fallbacks
 *
 * position-try-fallbacks CSS property.
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
struct position_try_fallbacks : types::property_base<"position-try-fallbacks">,
                                constants::global_values<position_try_fallbacks>
{
    using super_property = types::property_base<"position-try-fallbacks">;

    position_try_fallbacks() = delete;
    position_try_fallbacks(const std::string_view s) : super_property(std::string(s))
    {
    }
    position_try_fallbacks(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }
    position_try_fallbacks(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{}, {}, {}", v1, v2, v3))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
