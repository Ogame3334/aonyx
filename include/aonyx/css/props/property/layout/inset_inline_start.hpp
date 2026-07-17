/** @brief CSS property: inset-inline-start
 *
 * inset-inline-start CSS property.
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
struct inset_inline_start : types::property_base<"inset-inline-start">, constants::global_values<inset_inline_start>
{
    using super_property = types::property_base<"inset-inline-start">;

    inset_inline_start() = delete;
    inset_inline_start(util::numerical v) : super_property(v.to_string())
    {
    }
    inset_inline_start(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
