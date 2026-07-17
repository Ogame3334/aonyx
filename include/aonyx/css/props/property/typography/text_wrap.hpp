/** @brief CSS property: text-wrap
 *
 * text-wrap CSS property.
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
struct text_wrap : types::property_base<"text-wrap">, constants::global_values<text_wrap>
{
    using super_property = types::property_base<"text-wrap">;

    text_wrap() = delete;
    text_wrap(const std::string_view s) : super_property(std::string(s))
    {
    }
    text_wrap(std::string_view mode, std::string_view style) : super_property(std::format("{} {}", mode, style))
    {
    }

    inline static constexpr types::property_constant nowrap{key, "nowrap"};
    inline static constexpr types::property_constant wrap{key, "wrap"};
    inline static constexpr types::property_constant balance{key, "balance"};
    inline static constexpr types::property_constant pretty{key, "pretty"};
    inline static constexpr types::property_constant stable{key, "stable"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
