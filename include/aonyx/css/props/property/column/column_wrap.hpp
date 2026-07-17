/** @brief CSS property: column-wrap
 *
 * column-wrap CSS property.
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
struct column_wrap : types::property_base<"column-wrap">, constants::global_values<column_wrap>
{
    using super_property = types::property_base<"column-wrap">;

    column_wrap() = delete;
    column_wrap(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant nowrap{key, "nowrap"};
    inline static constexpr types::property_constant wrap{key, "wrap"};
    inline static constexpr types::property_constant balance{key, "balance"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
