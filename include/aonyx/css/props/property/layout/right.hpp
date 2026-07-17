/** @brief CSS property: right
 *
 * right CSS property.
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
struct right : types::property_base<"right">, constants::global_values<right>
{
    using super_property = types::property_base<"right">;

    right() = delete;
    right(util::numerical v) : super_property(v.to_string())
    {
    }
    right(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
