/** @brief CSS property: text-justify
 *
 * text-justify CSS property.
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
struct text_justify : types::property_base<"text-justify">, constants::global_values<text_justify>
{
    using super_property = types::property_base<"text-justify">;

    text_justify() = delete;
    text_justify(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant inter_word{key, "inter-word"};
    inline static constexpr types::property_constant inter_idograph{key, "inter-ideograph"};
    inline static constexpr types::property_constant inter_cluster{key, "inter-cluster"};
    inline static constexpr types::property_constant distribute{key, "distribute"};
    inline static constexpr types::property_constant kashida{key, "kashida"};
    inline static constexpr types::property_constant trim{key, "trim"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
