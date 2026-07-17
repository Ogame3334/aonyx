/** @brief CSS property: caret-shape
 *
 * caret-shape CSS property.
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
struct caret_shape : types::property_base<"caret-shape">, constants::global_values<caret_shape>
{
    using super_property = types::property_base<"caret-shape">;

    caret_shape() = delete;
    caret_shape(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant bar{key, "bar"};
    inline static constexpr types::property_constant block{key, "block"};
    inline static constexpr types::property_constant underscore{key, "underscore"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
