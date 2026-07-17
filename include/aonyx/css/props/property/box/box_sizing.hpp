/** @brief CSS property: box-sizing
 *
 * box-sizing CSS property.
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
struct box_sizing : types::property_base<"box-sizing">, constants::global_values<box_sizing>
{
    using super_property = types::property_base<"box-sizing">;

    box_sizing() = delete;
    box_sizing(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant content_box{key, "content-box"};
    inline static constexpr types::property_constant border_box{key, "border-box"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
