/** @brief CSS property: box-decoration-break
 *
 * box-decoration-break CSS property.
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
struct box_decoration_break : types::property_base<"box-decoration-break">,
                              constants::global_values<box_decoration_break>
{
    using super_property = types::property_base<"box-decoration-break">;

    box_decoration_break() = delete;
    box_decoration_break(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant slice{key, "slice"};
    inline static constexpr types::property_constant clone{key, "clone"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
