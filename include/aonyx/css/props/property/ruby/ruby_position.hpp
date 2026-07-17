/** @brief CSS property: ruby-position
 *
 * ruby-position CSS property.
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
struct ruby_position : types::property_base<"ruby-position">, constants::global_values<ruby_position>
{
    using super_property = types::property_base<"ruby-position">;

    ruby_position() = delete;
    ruby_position(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant over{key, "over"};
    inline static constexpr types::property_constant under{key, "under"};
    inline static constexpr types::property_constant alt{key, "alt"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
