/** @brief CSS property: place-content
 *
 * place-content CSS property.
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
struct place_content : types::property_base<"place-content">, constants::global_values<place_content>
{
    using super_property = types::property_base<"place-content">;

    place_content() = delete;
    place_content(std::string_view alignment) : super_property(std::string(alignment))
    {
    }
    place_content(std::string_view align, std::string_view justify)
        : super_property(std::format("{} {}", align, justify))
    {
    }
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
