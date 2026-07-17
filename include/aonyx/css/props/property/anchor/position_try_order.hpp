/** @brief CSS property: position-try-order
 *
 * position-try-order CSS property.
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
struct position_try_order : types::property_base<"position-try-order">, constants::global_values<position_try_order>
{
    using super_property = types::property_base<"position-try-order">;

    position_try_order() = delete;
    position_try_order(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant most_width{key, "most-width"};
    inline static constexpr types::property_constant most_height{key, "most-height"};
    inline static constexpr types::property_constant most_size{key, "most-size"};
    inline static constexpr types::property_constant most_block_size{key, "most-block-size"};
    inline static constexpr types::property_constant most_inline_size{key, "most-inline-size"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
