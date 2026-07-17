/** @brief CSS property: order
 *
 * order CSS property.
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
struct order : types::property_base<"order">, constants::global_values<order>
{
    using super_property = types::property_base<"order">;

    order() = delete;
    order(const std::string_view s) : super_property(std::string(s))
    {
    }
    order(util::numerical v) : super_property(v.to_string())
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
