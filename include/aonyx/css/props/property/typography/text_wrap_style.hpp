/** @brief CSS property: text-wrap-style
 *
 * text-wrap-style CSS property.
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
struct text_wrap_style : types::property_base<"text-wrap-style">, constants::global_values<text_wrap_style>
{
    using super_property = types::property_base<"text-wrap-style">;

    text_wrap_style() = delete;
    text_wrap_style(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant balance{key, "balance"};
    inline static constexpr types::property_constant pretty{key, "pretty"};
    inline static constexpr types::property_constant stable{key, "stable"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
