/** @brief CSS property: mask-type
 *
 * mask-type CSS property.
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
struct mask_type : types::property_base<"mask-type">, constants::global_values<mask_type>
{
    using super_property = types::property_base<"mask-type">;

    mask_type() = delete;
    mask_type(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant luminance{key, "luminance"};
    inline static constexpr types::property_constant alpha{key, "alpha"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
