/** @brief CSS property: background-repeat
 *
 * background-repeat CSS property.
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
struct background_repeat : types::property_base<"background-repeat">, constants::global_values<background_repeat>
{
    using super_property = types::property_base<"background-repeat">;

    background_repeat() = delete;
    background_repeat(std::string_view v) : super_property(std::string(v))
    {
    }
    background_repeat(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    background_repeat(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {} {} {}", v1, v2, v3, v4))
    {
    }

    inline static constexpr types::property_constant repeat{key, "repeat"};
    inline static constexpr types::property_constant repeat_x{key, "repeat-x"};
    inline static constexpr types::property_constant repeat_y{key, "repeat-y"};
    inline static constexpr types::property_constant no_repeat{key, "no-repeat"};
    inline static constexpr types::property_constant space{key, "space"};
    inline static constexpr types::property_constant round{key, "round"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
