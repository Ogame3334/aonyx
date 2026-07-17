/** @brief CSS property: mask-size
 *
 * mask-size CSS property.
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
struct mask_size : types::property_base<"mask-size">, constants::global_values<mask_size>
{
    using super_property = types::property_base<"mask-size">;

    mask_size() = delete;
    mask_size(const std::string_view s) : super_property(std::string(s))
    {
    }
    mask_size(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    mask_size(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {}, {} {}", v1, v2, v3, v4))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant cover{key, "cover"};
    inline static constexpr types::property_constant contain{key, "contain"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
