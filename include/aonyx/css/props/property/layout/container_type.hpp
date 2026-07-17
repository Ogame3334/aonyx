/** @brief CSS property: container-type
 *
 * container-type CSS property.
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
struct container_type : types::property_base<"container-type">, constants::global_values<container_type>
{
    using super_property = types::property_base<"container-type">;

    container_type() = delete;
    container_type(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant inline_size{key, "inline-size"};
    inline static constexpr types::property_constant size{key, "size"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
