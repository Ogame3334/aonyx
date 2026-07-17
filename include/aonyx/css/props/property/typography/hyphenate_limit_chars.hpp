/** @brief CSS property: hyphenate-limit-chars
 *
 * hyphenate-limit-chars CSS property.
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
struct hyphenate_limit_chars : types::property_base<"hyphenate-limit-chars">,
                               constants::global_values<hyphenate_limit_chars>
{
    using super_property = types::property_base<"hyphenate-limit-chars">;

    hyphenate_limit_chars() = delete;
    hyphenate_limit_chars(util::numerical v) : super_property(v.to_string())
    {
    }
    hyphenate_limit_chars(util::numerical total, util::numerical before)
        : super_property(std::format("{} {}", total, before))
    {
    }
    hyphenate_limit_chars(util::numerical total, util::numerical before, util::numerical after)
        : super_property(std::format("{} {} {}", total, before, after))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
