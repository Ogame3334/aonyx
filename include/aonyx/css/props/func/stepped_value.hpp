/** @brief CSS function: stepped-value
 *
 * CSS function utilities for stepped-value.
 */
#pragma once

#include <format>
#include <string>
#include <string_view>

#include <aonyx/util/numerical.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace func
{
std::string round(util::numerical value, util::numerical interval)
{
    return std::format("round({}, {})", value, interval);
}

std::string round(std::string_view strategy, util::numerical value, util::numerical interval)
{
    return std::format("round({}, {}, {})", strategy, value, interval);
}

std::string mod(util::numerical dividend, util::numerical divisor)
{
    return std::format("mod({}, {})", dividend, divisor);
}

std::string rem(util::numerical dividend, util::numerical divisor)
{
    return std::format("rem({}, {})", dividend, divisor);
}

std::string progress(util::numerical value, util::numerical start, util::numerical end)
{
    return std::format("progress({}, {}, {})", value, start, end);
}
} // namespace func
} // namespace props
} // namespace css
} // namespace aonyx
