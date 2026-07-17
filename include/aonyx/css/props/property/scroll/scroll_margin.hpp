/** @brief CSS property: scroll-margin
 *
 * scroll-margin CSS property.
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
struct scroll_margin : types::property_base<"scroll-margin">, constants::global_values<scroll_margin>
{
    using super_property = types::property_base<"scroll-margin">;

    scroll_margin() = delete;
    scroll_margin(std::string_view v) : super_property(std::string(v))
    {
    }
    scroll_margin(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    scroll_margin(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }
    scroll_margin(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {} {} {}", v1, v2, v3, v4))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
