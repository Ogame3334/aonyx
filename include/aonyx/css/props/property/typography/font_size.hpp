/** @brief CSS property: font-size
 *
 * font-size CSS property.
 */
#pragma once

#include <string>
#include <string_view>

#include <aonyx/css/props/constants/global_values.hpp>
#include <aonyx/css/props/types/property.hpp>
#include <aonyx/util/numerical.hpp>

namespace aonyx
{
namespace css
{
namespace props
{
namespace property
{
struct font_size : types::property_base<"font-size">, constants::global_values<font_size>
{
    using super_property = types::property_base<"font-size">;

    font_size() = delete;
    font_size(util::numerical v) : super_property(v.to_string())
    {
    }
    font_size(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant xx_small{key, "xx-small"};
    inline static constexpr types::property_constant x_small{key, "x-small"};
    inline static constexpr types::property_constant small{key, "small"};
    inline static constexpr types::property_constant medium{key, "medium"};
    inline static constexpr types::property_constant large{key, "large"};
    inline static constexpr types::property_constant x_large{key, "x-large"};
    inline static constexpr types::property_constant xx_large{key, "xx-large"};
    inline static constexpr types::property_constant smaller{key, "smaller"};
    inline static constexpr types::property_constant larger{key, "larger"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
