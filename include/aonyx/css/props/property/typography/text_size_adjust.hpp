/** @brief CSS property: text-size-adjust
 *
 * text-size-adjust CSS property.
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
struct text_size_adjust : types::property_base<"text-size-adjust">, constants::global_values<text_size_adjust>
{
    using super_property = types::property_base<"text-size-adjust">;

    text_size_adjust() = delete;
    text_size_adjust(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant auto_{key, "auto"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
