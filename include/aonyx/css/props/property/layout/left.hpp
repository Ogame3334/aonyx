/** @brief CSS property: left
 *
 * left CSS property.
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
struct left : types::property_base<"left">, constants::global_values<left>
{
    using super_property = types::property_base<"left">;

    left() = delete;
    left(util::numerical v) : super_property(v.to_string())
    {
    }
    left(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
