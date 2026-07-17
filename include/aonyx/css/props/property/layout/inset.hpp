/** @brief CSS property: inset
 *
 * inset CSS property.
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
struct inset : types::property_base<"inset">, constants::global_values<inset>
{
    using super_property = types::property_base<"inset">;

    inset() = delete;
    inset(const std::string_view s) : super_property(std::string(s))
    {
    }
    inset(util::numerical v) : super_property(v.to_string())
    {
    }
    inset(util::numerical vertical, util::numerical horizontal)
        : super_property(std::format("{} {}", vertical, horizontal))
    {
    }
    inset(util::numerical top, util::numerical horizontal, util::numerical bottom)
        : super_property(std::format("{} {} {}", top, horizontal, bottom))
    {
    }
    inset(util::numerical top, util::numerical right, util::numerical bottom, util::numerical left)
        : super_property(std::format("{} {} {} {}", top, right, bottom, left))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
