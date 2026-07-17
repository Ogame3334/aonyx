/** @brief CSS property: align-content
 *
 * align-content CSS property.
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
struct align_content : types::property_base<"align-content">, constants::global_values<align_content>
{
    using super_property = types::property_base<"align-content">;

    align_content() = delete;
    align_content(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant stretch{key, "stretch"};
    inline static constexpr types::property_constant center{key, "center"};
    inline static constexpr types::property_constant start{key, "start"};
    inline static constexpr types::property_constant end{key, "end"};
    inline static constexpr types::property_constant flex_start{key, "flex-start"};
    inline static constexpr types::property_constant flex_end{key, "flex-end"};
    inline static constexpr types::property_constant space_between{key, "space-between"};
    inline static constexpr types::property_constant space_around{key, "space-around"};
    inline static constexpr types::property_constant space_evenly{key, "space-evenly"};
    inline static constexpr types::property_constant baseline{key, "baseline"};
    inline static constexpr types::property_constant safe_center{key, "safe center"};
    inline static constexpr types::property_constant unsafe_center{key, "unsafe center"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
