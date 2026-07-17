/** @brief CSS property: backdrop-filter
 *
 * backdrop-filter CSS property.
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
struct backdrop_filter : types::property_base<"backdrop-filter">, constants::global_values<backdrop_filter>
{
    using super_property = types::property_base<"backdrop-filter">;

    backdrop_filter() = delete;
    backdrop_filter(std::string_view v) : super_property(std::string(v))
    {
    }
    backdrop_filter(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    backdrop_filter(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
