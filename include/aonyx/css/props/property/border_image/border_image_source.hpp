/** @brief CSS property: border-image-source
 *
 * border-image-source CSS property.
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
struct border_image_source : types::property_base<"border-image-source">, constants::global_values<border_image_source>
{
    using super_property = types::property_base<"border-image-source">;

    border_image_source() = delete;
    border_image_source(std::string_view source) : super_property(std::string(source))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
