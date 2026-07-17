/** @brief CSS function: arithmetic
 *
 * CSS function utilities for arithmetic.
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
std::string calc(util::numerical expression)
{
    return std::format("calc({})", expression);
}

std::string calc_size(std::string_view basis, util::numerical expression)
{
    return std::format("calc-size({}, {})", basis, expression);
}
} // namespace func
} // namespace props
} // namespace css
} // namespace aonyx
