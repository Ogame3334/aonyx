/** @brief CSS property: inset-block-end
 *
 * inset-block-end CSS property.
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
struct inset_block_end : types::property_base<"inset-block-end">, constants::global_values<inset_block_end>
{
    using super_property = types::property_base<"inset-block-end">;

    inset_block_end() = delete;
    inset_block_end(util::numerical v) : super_property(v.to_string())
    {
    }
    inset_block_end(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
