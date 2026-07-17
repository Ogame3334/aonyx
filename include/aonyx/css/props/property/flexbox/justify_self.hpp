/** @brief CSS property: justify-self
 *
 * justify-self CSS property.
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
struct justify_self : types::property_base<"justify-self">, constants::global_values<justify_self>
{
    using super_property = types::property_base<"justify-self">;

    justify_self() = delete;
    justify_self(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant stretch{key, "stretch"};
    inline static constexpr types::property_constant center{key, "center"};
    inline static constexpr types::property_constant start{key, "start"};
    inline static constexpr types::property_constant end{key, "end"};
    inline static constexpr types::property_constant flex_start{key, "flex-start"};
    inline static constexpr types::property_constant flex_end{key, "flex-end"};
    inline static constexpr types::property_constant self_start{key, "self-start"};
    inline static constexpr types::property_constant self_end{key, "self-end"};
    inline static constexpr types::property_constant left{key, "left"};
    inline static constexpr types::property_constant right{key, "right"};
    inline static constexpr types::property_constant baseline{key, "baseline"};
    inline static constexpr types::property_constant safe_center{key, "safe center"};
    inline static constexpr types::property_constant unsafe_center{key, "unsafe center"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
