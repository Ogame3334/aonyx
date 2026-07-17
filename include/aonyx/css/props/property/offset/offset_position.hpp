/** @brief CSS property: offset-position
 *
 * offset-position CSS property.
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
struct offset_position : types::property_base<"offset-position">, constants::global_values<offset_position>
{
    using super_property = types::property_base<"offset-position">;

    offset_position() = delete;
    offset_position(std::string_view v) : super_property(std::string(v))
    {
    }
    offset_position(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant normal{key, "normal"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
