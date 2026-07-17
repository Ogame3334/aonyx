/** @brief CSS property: margin
 *
 * margin CSS property.
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
struct margin : types::property_base<"margin">, constants::global_values<margin>
{
    using super_property = types::property_base<"margin">;

    margin() = delete;
    margin(const std::string_view s) : super_property(std::string(s))
    {
    }
    margin(util::numerical n) : super_property(n.to_string())
    {
    }
    margin(util::numerical v, util::numerical h) : super_property(std::format("{} {}", v, h))
    {
    }
    margin(util::numerical u, util::numerical h, util::numerical b) : super_property(std::format("{} {} {}", u, h, b))
    {
    }
    margin(util::numerical u, util::numerical r, util::numerical b, util::numerical l)
        : super_property(std::format("{} {} {} {}", u, r, b, l))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
