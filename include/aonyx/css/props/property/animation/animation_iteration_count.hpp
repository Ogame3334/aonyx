/** @brief CSS property: animation-iteration-count
 *
 * animation-iteration-count CSS property.
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
struct animation_iteration_count : types::property_base<"animation-iteration-count">,
                                   constants::global_values<animation_iteration_count>
{
    using super_property = types::property_base<"animation-iteration-count">;

    animation_iteration_count() = delete;
    animation_iteration_count(std::string_view v) : super_property(std::string(v))
    {
    }
    animation_iteration_count(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant infinite{key, "infinite"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
