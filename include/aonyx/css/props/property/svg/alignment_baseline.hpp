/** @brief CSS property: alignment-baseline
 *
 * alignment-baseline CSS property.
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
struct alignment_baseline : types::property_base<"alignment-baseline">, constants::global_values<alignment_baseline>
{
    using super_property = types::property_base<"alignment-baseline">;

    alignment_baseline() = delete;
    alignment_baseline(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant alphabetic{key, "alphabetic"};
    inline static constexpr types::property_constant baseline{key, "baseline"};
    inline static constexpr types::property_constant before_edge{key, "before-edge"};
    inline static constexpr types::property_constant text_before_edge{key, "text-before-edge"};
    inline static constexpr types::property_constant middle{key, "middle"};
    inline static constexpr types::property_constant central{key, "central"};
    inline static constexpr types::property_constant after_edge{key, "after-edge"};
    inline static constexpr types::property_constant text_after_edge{key, "text-after-edge"};
    inline static constexpr types::property_constant ideographic{key, "ideographic"};
    inline static constexpr types::property_constant hanging{key, "hanging"};
    inline static constexpr types::property_constant mathematical{key, "mathematical"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
