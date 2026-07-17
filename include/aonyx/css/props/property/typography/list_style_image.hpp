/** @brief CSS property: list-style-image
 *
 * list-style-image CSS property.
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
struct list_style_image : types::property_base<"list-style-image">, constants::global_values<list_style_image>
{
    using super_property = types::property_base<"list-style-image">;

    list_style_image() = delete;
    list_style_image(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
