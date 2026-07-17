/** @brief CSS property: text-decoration-inset
 *
 * text-decoration-inset CSS property.
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
struct text_decoration_inset : types::property_base<"text-decoration-inset">,
                               constants::global_values<text_decoration_inset>
{
    using super_property = types::property_base<"text-decoration-inset">;

    text_decoration_inset() = delete;
    text_decoration_inset(const std::string_view s) : super_property(std::string(s))
    {
    }
    text_decoration_inset(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    text_decoration_inset(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }
    text_decoration_inset(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4)
        : super_property(std::format("{} {} {} {}", v1, v2, v3, v4))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant leading{key, "leading"};
    inline static constexpr types::property_constant text{key, "text"};
    inline static constexpr types::property_constant edges{key, "edges"};
    inline static constexpr types::property_constant box_decoration{key, "box-decoration"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
