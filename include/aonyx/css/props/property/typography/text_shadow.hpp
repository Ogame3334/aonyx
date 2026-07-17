/** @brief CSS property: text-shadow
 *
 * text-shadow CSS property.
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
struct text_shadow : types::property_base<"text-shadow">, constants::global_values<text_shadow>
{
    using super_property = types::property_base<"text-shadow">;

    text_shadow() = delete;
    text_shadow(std::string_view shadow) : super_property(std::string(shadow))
    {
    }
    text_shadow(std::string_view shadow1, std::string_view shadow2)
        : super_property(std::format("{}, {}", shadow1, shadow2))
    {
    }
    text_shadow(std::string_view shadow1, std::string_view shadow2, std::string_view shadow3)
        : super_property(std::format("{}, {}, {}", shadow1, shadow2, shadow3))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
