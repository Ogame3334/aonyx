/** @brief CSS property: text-emphasis-style
 *
 * text-emphasis-style CSS property.
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
struct text_emphasis_style : types::property_base<"text-emphasis-style">, constants::global_values<text_emphasis_style>
{
    using super_property = types::property_base<"text-emphasis-style">;

    text_emphasis_style() = delete;
    text_emphasis_style(const std::string_view s) : super_property(std::string(s))
    {
    }
    text_emphasis_style(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    text_emphasis_style(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant filled{key, "filled"};
    inline static constexpr types::property_constant open{key, "open"};
    inline static constexpr types::property_constant dot{key, "dot"};
    inline static constexpr types::property_constant circle{key, "circle"};
    inline static constexpr types::property_constant double_circle{key, "double-circle"};
    inline static constexpr types::property_constant triangle{key, "triangle"};
    inline static constexpr types::property_constant sesame{key, "sesame"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
