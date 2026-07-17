/** @brief CSS property: dominant-baseline
 *
 * dominant-baseline CSS property.
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
struct dominant_baseline : types::property_base<"dominant-baseline">, constants::global_values<dominant_baseline>
{
    using super_property = types::property_base<"dominant-baseline">;

    dominant_baseline() = delete;
    dominant_baseline(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant alphabetic{key, "alphabetic"};
    inline static constexpr types::property_constant hanging{key, "hanging"};
    inline static constexpr types::property_constant ideographic{key, "ideographic"};
    inline static constexpr types::property_constant mathematical{key, "mathematical"};
    inline static constexpr types::property_constant central{key, "central"};
    inline static constexpr types::property_constant middle{key, "middle"};
    inline static constexpr types::property_constant text_after_edge{key, "text-after-edge"};
    inline static constexpr types::property_constant text_before_edge{key, "text-before-edge"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
