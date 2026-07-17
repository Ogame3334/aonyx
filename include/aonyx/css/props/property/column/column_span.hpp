/** @brief CSS property: column-span
 *
 * column-span CSS property.
 */
#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/css/props/types/property.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace property
{
struct column_span : types::property_base<"column-span">, constants::global_values<column_span>
{
    using super_property = types::property_base<"column-span">;

    column_span() = delete;
    column_span(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant all{key, "all"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
