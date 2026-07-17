/** @brief CSS property: stroke-dasharray
 *
 * stroke-dasharray CSS property.
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
struct stroke_dasharray : types::property_base<"stroke-dasharray">, constants::global_values<stroke_dasharray>
{
    using super_property = types::property_base<"stroke-dasharray">;

    stroke_dasharray() = delete;
    stroke_dasharray(std::string_view v) : super_property(std::string(v))
    {
    }
    stroke_dasharray(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2))
    {
    }
    stroke_dasharray(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{}, {}, {}", v1, v2, v3))
    {
    }
    stroke_dasharray(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{}, {}, {}, {}", v1, v2, v3, v4))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
