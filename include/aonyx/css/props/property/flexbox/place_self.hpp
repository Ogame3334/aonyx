/** @brief CSS property: place-self
 *
 * place-self CSS property.
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
struct place_self : types::property_base<"place-self">, constants::global_values<place_self>
{
    using super_property = types::property_base<"place-self">;

    place_self() = delete;
    place_self(std::string_view alignment) : super_property(std::string(alignment))
    {
    }
    place_self(std::string_view align, std::string_view justify) : super_property(std::format("{} {}", align, justify))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
