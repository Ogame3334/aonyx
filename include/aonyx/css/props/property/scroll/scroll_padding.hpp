/** @brief CSS property: scroll-padding
 *
 * scroll-padding CSS property.
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
struct scroll_padding : types::property_base<"scroll-padding">, constants::global_values<scroll_padding>
{
    using super_property = types::property_base<"scroll-padding">;

    scroll_padding() = delete;
    scroll_padding(const std::string_view s) : super_property(std::string(s))
    {
    }
    scroll_padding(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    scroll_padding(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }
    scroll_padding(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {} {} {}", v1, v2, v3, v4))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
