/** @brief CSS property: margin-trim
 *
 * margin-trim CSS property.
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
struct margin_trim : types::property_base<"margin-trim">, constants::global_values<margin_trim>
{
    using super_property = types::property_base<"margin-trim">;

    margin_trim() = delete;
    margin_trim(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant block{key, "block"};
    inline static constexpr types::property_constant block_start{key, "block-start"};
    inline static constexpr types::property_constant block_end{key, "block-end"};
    inline static constexpr types::property_constant inline_{key, "inline"};
    inline static constexpr types::property_constant inline_start{key, "inline-start"};
    inline static constexpr types::property_constant inline_end{key, "inline-end"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
