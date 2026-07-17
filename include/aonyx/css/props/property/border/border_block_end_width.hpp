/** @brief CSS property: border-block-end-width
 *
 * border-block-end-width CSS property.
 */
#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/css/props/types/property.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace property
{
struct border_block_end_width : types::property_base<"border-block-end-width">,
                                constants::global_values<border_block_end_width>
{
    using super_property = types::property_base<"border-block-end-width">;

    border_block_end_width() = delete;
    border_block_end_width(util::numerical w) : super_property(w.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
