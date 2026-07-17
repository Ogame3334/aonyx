/** @brief CSS function: exponential
 *
 * CSS function utilities for exponential.
 */
#pragma once

#include <format>
#include <string>

#include <aonyx/util/concepts.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace func
{
std::string pow(util::numerical base, util::numerical exponent)
{
    return std::format("pow({}, {})", base, exponent);
}

std::string sqrt(util::numerical x)
{
    return std::format("sqrt({})", x);
}

template <util::like<util::numerical>... Args>
std::string hypot(Args... args)
{
    std::string result = "hypot(";
    bool first = true;
    ((result += (first ? "" : ", ") + args.to_string(), first = false), ...);
    result += ")";
    return result;
}

std::string log(util::numerical value)
{
    return std::format("log({})", value);
}

std::string log(util::numerical value, util::numerical base)
{
    return std::format("log({}, {})", value, base);
}

std::string exp(util::numerical x)
{
    return std::format("exp({})", x);
}
} // namespace func
} // namespace props
} // namespace css
} // namespace aonyx
