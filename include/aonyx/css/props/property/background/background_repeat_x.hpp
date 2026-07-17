/** @brief CSS property: background-repeat-x
 *
 * background-repeat-x CSS property.
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
struct background_repeat_x : types::property_base<"background-repeat-x">, constants::global_values<background_repeat_x>
{
    using super_property = types::property_base<"background-repeat-x">;

    background_repeat_x() = delete;
    background_repeat_x(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant repeat{key, "repeat"};
    inline static constexpr types::property_constant no_repeat{key, "no-repeat"};
    inline static constexpr types::property_constant space{key, "space"};
    inline static constexpr types::property_constant round{key, "round"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
