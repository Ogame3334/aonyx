/** @brief CSS property: print-color-adjust
 *
 * print-color-adjust CSS property.
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
struct print_color_adjust : types::property_base<"print-color-adjust">, constants::global_values<print_color_adjust>
{
    using super_property = types::property_base<"print-color-adjust">;

    print_color_adjust() = delete;
    print_color_adjust(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant exact{key, "exact"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
