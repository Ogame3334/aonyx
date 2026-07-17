/** @brief CSS property: text-combine-upright
 *
 * text-combine-upright CSS property.
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
struct text_combine_upright : types::property_base<"text-combine-upright">,
                              constants::global_values<text_combine_upright>
{
    using super_property = types::property_base<"text-combine-upright">;

    text_combine_upright() = delete;
    text_combine_upright(const std::string_view s) : super_property(std::string(s))
    {
    }
    text_combine_upright(std::string_view v, std::string_view digits) : super_property(std::format("{} {}", v, digits))
    {
    }

    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant all{key, "all"};
    inline static constexpr types::property_constant digits{key, "digits"};
    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant full_width{key, "full-width"};
    inline static constexpr types::property_constant up{key, "up"};
    inline static constexpr types::property_constant down{key, "down"};
    inline static constexpr types::property_constant mixed{key, "mixed"};
    inline static constexpr types::property_constant upright{key, "upright"};
    inline static constexpr types::property_constant sideways{key, "sideways"};
    inline static constexpr types::property_constant sideways_right{key, "sideways-right"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
