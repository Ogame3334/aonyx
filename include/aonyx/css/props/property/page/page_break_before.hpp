/** @brief CSS property: page-break-before
 *
 * page-break-before CSS property.
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
struct page_break_before : types::property_base<"page-break-before">, constants::global_values<page_break_before>
{
    using super_property = types::property_base<"page-break-before">;

    page_break_before() = delete;
    page_break_before(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant always{key, "always"};
    inline static constexpr types::property_constant avoid{key, "avoid"};
    inline static constexpr types::property_constant left{key, "left"};
    inline static constexpr types::property_constant right{key, "right"};
    inline static constexpr types::property_constant recto{key, "recto"};
    inline static constexpr types::property_constant verso{key, "verso"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
