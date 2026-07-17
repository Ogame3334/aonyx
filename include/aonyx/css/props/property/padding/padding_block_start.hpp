/** @brief CSS property: padding-block-start
 *
 * padding-block-start CSS property.
 */
#pragma once

#include <string>
#include <string_view>
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
struct padding_block_start : types::property_base<"padding-block-start">, constants::global_values<padding_block_start>
{
    using super_property = types::property_base<"padding-block-start">;

    padding_block_start() = delete;
    padding_block_start(const std::string_view s) : super_property(std::string(s))
    {
    }
    padding_block_start(util::numerical s) : super_property(s.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
