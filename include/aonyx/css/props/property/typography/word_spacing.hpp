/** @brief CSS property: word-spacing
 *
 * word-spacing CSS property.
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
struct word_spacing : types::property_base<"word-spacing">, constants::global_values<word_spacing>
{
    using super_property = types::property_base<"word-spacing">;

    word_spacing() = delete;
    word_spacing(util::numerical v) : super_property(v.to_string())
    {
    }
    word_spacing(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
