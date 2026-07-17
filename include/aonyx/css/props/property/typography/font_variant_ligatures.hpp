/** @brief CSS property: font-variant-ligatures
 *
 * font-variant-ligatures CSS property.
 */
#pragma once

#include <format>
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
struct font_variant_ligatures : types::property_base<"font-variant-ligatures">,
                                constants::global_values<font_variant_ligatures>
{
    using super_property = types::property_base<"font-variant-ligatures">;

    font_variant_ligatures() = delete;
    font_variant_ligatures(const std::string_view s) : super_property(std::string(s))
    {
    }
    font_variant_ligatures(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2))
    {
    }
    font_variant_ligatures(std::string_view v1, std::string_view v2, std::string_view v3)
        : super_property(std::format("{} {} {}", v1, v2, v3))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant common_ligatures{key, "common-ligatures"};
    inline static constexpr types::property_constant no_common_ligatures{key, "no-common-ligatures"};
    inline static constexpr types::property_constant discretionary_ligatures{key, "discretionary-ligatures"};
    inline static constexpr types::property_constant no_discretionary_ligatures{key, "no-discretionary-ligatures"};
    inline static constexpr types::property_constant historical_ligatures{key, "historical-ligatures"};
    inline static constexpr types::property_constant no_historical_ligatures{key, "no-historical-ligatures"};
    inline static constexpr types::property_constant contextual{key, "contextual"};
    inline static constexpr types::property_constant no_contextual{key, "no-contextual"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
