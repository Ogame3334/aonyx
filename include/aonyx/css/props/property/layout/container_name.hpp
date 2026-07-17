/** @brief CSS property: container-name
 *
 * container-name CSS property.
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
struct container_name : types::property_base<"container-name">, constants::global_values<container_name>
{
    using super_property = types::property_base<"container-name">;

    container_name() = delete;
    container_name(std::string_view name) : super_property(std::string(name))
    {
    }
    container_name(std::string_view name1, std::string_view name2) : super_property(std::format("{} {}", name1, name2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
