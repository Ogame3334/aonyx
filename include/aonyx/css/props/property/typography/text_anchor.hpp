/** @brief CSS property: text-anchor
 *
 * text-anchor CSS property.
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
struct text_anchor : types::property_base<"text-anchor">, constants::global_values<text_anchor>
{
    using super_property = types::property_base<"text-anchor">;

    text_anchor() = delete;
    text_anchor(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant start{key, "start"};
    inline static constexpr types::property_constant middle{key, "middle"};
    inline static constexpr types::property_constant end{key, "end"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
