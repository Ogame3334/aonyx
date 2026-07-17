/** @brief CSS property: text-wrap-mode
 *
 * text-wrap-mode CSS property.
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
struct text_wrap_mode : types::property_base<"text-wrap-mode">, constants::global_values<text_wrap_mode>
{
    using super_property = types::property_base<"text-wrap-mode">;

    text_wrap_mode() = delete;
    text_wrap_mode(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant nowrap{key, "nowrap"};
    inline static constexpr types::property_constant wrap{key, "wrap"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
