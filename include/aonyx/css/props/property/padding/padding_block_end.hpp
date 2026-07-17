/** @brief CSS property: padding-block-end
 *
 * padding-block-end CSS property.
 */
#pragma once

#include <format>

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
struct padding_block_end : types::property_base<"padding-block-end">, constants::global_values<padding_block_end>
{
    using super_property = types::property_base<"padding-block-end">;

    padding_block_end() = delete;
    padding_block_end(util::numerical e) : super_property(e.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
