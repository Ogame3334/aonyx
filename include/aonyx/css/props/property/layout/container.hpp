/** @brief CSS property: container
 *
 * container CSS property.
 */
#pragma once

#include <format>
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
struct container : types::property_base<"container">, constants::global_values<container>
{
    using super_property = types::property_base<"container">;

    container() = delete;
    container(std::string_view type, std::string_view name) : super_property(std::format("{} / {}", type, name))
    {
    }
    container(std::string_view name) : super_property(std::string(name))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
