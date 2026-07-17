/** @brief CSS property: ruby-overhang
 *
 * ruby-overhang CSS property.
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
struct ruby_overhang : types::property_base<"ruby-overhang">, constants::global_values<ruby_overhang>
{
    using super_property = types::property_base<"ruby-overhang">;

    ruby_overhang() = delete;
    ruby_overhang(std::string_view v) : super_property(std::string(v))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
