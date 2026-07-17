/** @brief CSS property: font-synthesis
 *
 * font-synthesis CSS property.
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
struct font_synthesis : types::property_base<"font-synthesis">, constants::global_values<font_synthesis>
{
    using super_property = types::property_base<"font-synthesis">;

    font_synthesis() = delete;
    font_synthesis(const std::string_view s) : super_property(std::string(s))
    {
    }
    font_synthesis(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    font_synthesis(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant weight{key, "weight"};
    inline static constexpr types::property_constant style{key, "style"};
    inline static constexpr types::property_constant small_caps{key, "small-caps"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
