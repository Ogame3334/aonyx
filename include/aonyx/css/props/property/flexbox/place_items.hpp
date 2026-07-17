/** @brief CSS property: place-items
 *
 * place-items CSS property.
 */
#pragma once

#include <string>
#include <format>
#include <string_view>

#include <aonyx/css/props/types/property.hpp>
#include <aonyx/css/props/constants/global_values.hpp>

namespace aonyx
{
    namespace css
    {
        namespace props
        {
            namespace property
            {
                struct place_items : types::property_base<"place-items">, constants::global_values<place_items>
                {
                    using super_property = types::property_base<"place-items">;

                    place_items() = delete;
                    place_items(std::string_view alignment) : super_property(std::string(alignment)) {}
                    place_items(std::string_view align, std::string_view justify) : super_property(std::format("{} {}", align, justify)) {}
                };
            }
        }
    }
}
