/** @brief CSS property: border
 *
 * border CSS property.
 */
#pragma once

#include <format>
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
struct border : types::property_base<"border">, constants::global_values<border>
{
    using super_property = types::property_base<"border">;

    border() = delete;
    border(std::string_view style) : super_property(std::string(style))
    {
    }
    border(std::string_view style, std::string_view color) : super_property(std::format("{} {}", style, color))
    {
    }
    border(util::numerical width, std::string_view style) : super_property(std::format("{} {}", width, style))
    {
    }
    border(std::string_view width, std::string_view style, std::string_view color)
        : super_property(std::format("{} {} {}", width, style, color))
    {
    }
    border(util::numerical width, std::string_view style, std::string_view color)
        : super_property(std::format("{} {} {}", width, style, color))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant hidden{key, "hidden"};
    inline static constexpr types::property_constant dotted{key, "dotted"};
    inline static constexpr types::property_constant dashed{key, "dashed"};
    inline static constexpr types::property_constant solid{key, "solid"};
    inline static constexpr types::property_constant double_{key, "double"};
    inline static constexpr types::property_constant groove{key, "groove"};
    inline static constexpr types::property_constant ridge{key, "ridge"};
    inline static constexpr types::property_constant inset{key, "inset"};
    inline static constexpr types::property_constant outset{key, "outset"};

    inline static constexpr types::property_constant thin{key, "thin"};
    inline static constexpr types::property_constant medium{key, "medium"};
    inline static constexpr types::property_constant thick{key, "thick"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
