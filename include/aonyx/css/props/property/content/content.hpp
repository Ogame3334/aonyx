/** @brief CSS property: content
 *
 * content CSS property.
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
struct content : types::property_base<"content">, constants::global_values<content>
{
    using super_property = types::property_base<"content">;

    content() = delete;
    content(const std::string_view s) : super_property(std::string(s))
    {
    }
    content(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant normal{key, "normal"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
