/** @brief CSS property: flex-wrap
 *
 * flex-wrap CSS property.
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
struct flex_wrap : types::property_base<"flex-wrap">, constants::global_values<flex_wrap>
{
    using super_property = types::property_base<"flex-wrap">;

    flex_wrap() = delete;
    flex_wrap(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant nowrap{key, "nowrap"};
    inline static constexpr types::property_constant wrap{key, "wrap"};
    inline static constexpr types::property_constant wrap_reverse{key, "wrap-reverse"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
