/** @brief CSS property: quotes
 *
 * quotes CSS property.
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
struct quotes : types::property_base<"quotes">, constants::global_values<quotes>
{
    using super_property = types::property_base<"quotes">;

    quotes() = delete;
    quotes(const std::string_view s) : super_property(std::string(s))
    {
    }
    quotes(std::string_view open1, std::string_view close1) : super_property(std::format("{} {}", open1, close1))
    {
    }
    quotes(std::string_view open1, std::string_view close1, std::string_view open2, std::string_view close2)
        : super_property(std::format("{} {} {} {}", open1, close1, open2, close2))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
