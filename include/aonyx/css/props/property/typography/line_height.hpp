/** @brief CSS property: line-height
 *
 * line-height CSS property.
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
struct line_height : types::property_base<"line-height">, constants::global_values<line_height>
{
    using super_property = types::property_base<"line-height">;

    line_height() = delete;
    line_height(util::numerical v) : super_property(v.to_string())
    {
    }
    line_height(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
