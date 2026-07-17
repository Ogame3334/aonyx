/** @brief CSS property: font-weight
 *
 * font-weight CSS property.
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
struct font_weight : types::property_base<"font-weight">, constants::global_values<font_weight>
{
    using super_property = types::property_base<"font-weight">;

    font_weight() = delete;
    font_weight(util::numerical v) : super_property(v.to_string())
    {
    }
    font_weight(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant normal{key, "normal"};
    inline static constexpr types::property_constant bold{key, "bold"};
    inline static constexpr types::property_constant bolder{key, "bolder"};
    inline static constexpr types::property_constant lighter{key, "lighter"};
    inline static constexpr types::property_constant thin{key, "100"};
    inline static constexpr types::property_constant extra_light{key, "200"};
    inline static constexpr types::property_constant light{key, "300"};
    inline static constexpr types::property_constant medium_weight{key, "400"};
    inline static constexpr types::property_constant medium{key, "500"};
    inline static constexpr types::property_constant semi_bold{key, "600"};
    inline static constexpr types::property_constant bold_value{key, "700"};
    inline static constexpr types::property_constant extra_bold{key, "800"};
    inline static constexpr types::property_constant black{key, "900"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
