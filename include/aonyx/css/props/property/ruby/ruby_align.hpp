/** @brief CSS property: ruby-align
 *
 * ruby-align CSS property.
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
struct ruby_align : types::property_base<"ruby-align">, constants::global_values<ruby_align>
{
    using super_property = types::property_base<"ruby-align">;

    ruby_align() = delete;
    ruby_align(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant start{key, "start"};
    inline static constexpr types::property_constant center{key, "center"};
    inline static constexpr types::property_constant space_around{key, "space-around"};
    inline static constexpr types::property_constant space_between{key, "space-between"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
