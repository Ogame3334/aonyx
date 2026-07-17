/** @brief CSS property: list-style
 *
 * list-style CSS property.
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
struct list_style : types::property_base<"list-style">, constants::global_values<list_style>
{
    using super_property = types::property_base<"list-style">;

    list_style() = delete;
    list_style(std::string_view type) : super_property(std::string(type))
    {
    }
    list_style(std::string_view type, std::string_view position_or_url)
        : super_property(std::format("{} {}", type, position_or_url))
    {
    }
    list_style(std::string_view type, std::string_view position, std::string_view image)
        : super_property(std::format("{} {} {}", type, position, image))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant disc{key, "disc"};
    inline static constexpr types::property_constant circle{key, "circle"};
    inline static constexpr types::property_constant square{key, "square"};
    inline static constexpr types::property_constant decimal{key, "decimal"};
    inline static constexpr types::property_constant decimal_leading_zero{key, "decimal-leading-zero"};
    inline static constexpr types::property_constant lower_alpha{key, "lower-alpha"};
    inline static constexpr types::property_constant upper_alpha{key, "upper-alpha"};
    inline static constexpr types::property_constant lower_greek{key, "lower-greek"};
    inline static constexpr types::property_constant lower_latin{key, "lower-latin"};
    inline static constexpr types::property_constant upper_latin{key, "upper-latin"};
    inline static constexpr types::property_constant lower_roman{key, "lower-roman"};
    inline static constexpr types::property_constant upper_roman{key, "upper-roman"};
    inline static constexpr types::property_constant inside{key, "inside"};
    inline static constexpr types::property_constant outside{key, "outside"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
