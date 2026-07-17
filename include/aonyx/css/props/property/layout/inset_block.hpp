/** @brief CSS property: inset-block
 *
 * inset-block CSS property.
 */
#pragma once

#include <format>
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
struct inset_block : types::property_base<"inset-block">, constants::global_values<inset_block>
{
    using super_property = types::property_base<"inset-block">;

    inset_block() = delete;
    inset_block(util::numerical v) : super_property(v.to_string())
    {
    }
    inset_block(util::numerical start, util::numerical end) : super_property(std::format("{} {}", start, end))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
