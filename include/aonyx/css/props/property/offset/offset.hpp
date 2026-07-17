/** @brief CSS property: offset
 *
 * offset CSS property.
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
struct offset : types::property_base<"offset">, constants::global_values<offset>
{
    using super_property = types::property_base<"offset">;

    offset() = delete;
    offset(std::string_view v) : super_property(std::string(v))
    {
    }
    offset(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    offset(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }
    offset(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {} {} {}", v1, v2, v3, v4))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant none{key, "none"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
