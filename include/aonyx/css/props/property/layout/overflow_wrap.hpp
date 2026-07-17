/** @brief CSS property: overflow-wrap
 *
 * overflow-wrap CSS property.
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
struct overflow_wrap : types::property_base<"overflow-wrap">, constants::global_values<overflow_wrap>
{
    using super_property = types::property_base<"overflow-wrap">;

    overflow_wrap() = delete;
    overflow_wrap(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant break_word{key, "break-word"};
    inline static constexpr types::property_constant anywhere{key, "anywhere"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
