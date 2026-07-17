/** @brief CSS property: caret
 *
 * caret CSS property.
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
struct caret : types::property_base<"caret">, constants::global_values<caret>
{
    using super_property = types::property_base<"caret">;

    caret() = delete;
    caret(std::string_view color) : super_property(std::string(color))
    {
    }
    caret(std::string_view color, std::string_view shape) : super_property(std::format("{} {}", color, shape))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
