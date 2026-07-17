/** @brief CSS property: animation
 *
 * animation CSS property.
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
struct animation : types::property_base<"animation">, constants::global_values<animation>
{
    using super_property = types::property_base<"animation">;

    animation() = delete;
    animation(const std::string_view s) : super_property(std::string(s))
    {
    }
    animation(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }
    animation(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{}, {}, {}", v1, v2, v3))
    {
    }
    animation(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{}, {}, {}, {}", v1, v2, v3, v4))
    {
    }
    animation(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4, std::string_view v5)
        : super_property(std::format("{}, {}, {}, {}, {}", v1, v2, v3, v4, v5))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
