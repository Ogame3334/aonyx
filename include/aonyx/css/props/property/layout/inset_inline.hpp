/** @brief CSS property: inset-inline
 *
 * inset-inline CSS property.
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
struct inset_inline : types::property_base<"inset-inline">, constants::global_values<inset_inline>
{
    using super_property = types::property_base<"inset-inline">;

    inset_inline() = delete;
    inset_inline(util::numerical v) : super_property(v.to_string())
    {
    }
    inset_inline(util::numerical start, util::numerical end) : super_property(std::format("{} {}", start, end))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
