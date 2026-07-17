/** @brief CSS property: user-select
 *
 * user-select CSS property.
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
struct user_select : types::property_base<"user-select">, constants::global_values<user_select>
{
    using super_property = types::property_base<"user-select">;

    user_select() = delete;
    user_select(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant text{key, "text"};
    inline static constexpr types::property_constant all{key, "all"};
    inline static constexpr types::property_constant contain{key, "contain"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
