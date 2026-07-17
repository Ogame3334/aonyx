/** @brief CSS property: resize
 *
 * resize CSS property.
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
struct resize : types::property_base<"resize">, constants::global_values<resize>
{
    using super_property = types::property_base<"resize">;

    resize() = delete;
    resize(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant both{key, "both"};
    inline static constexpr types::property_constant horizontal{key, "horizontal"};
    inline static constexpr types::property_constant vertical{key, "vertical"};
    inline static constexpr types::property_constant block{key, "block"};
    inline static constexpr types::property_constant inline_{key, "inline"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
