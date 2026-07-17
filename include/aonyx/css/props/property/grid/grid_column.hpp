/** @brief CSS property: grid-column
 *
 * grid-column CSS property.
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
                struct grid_column : types::property_base<"grid-column">, constants::global_values<grid_column>
                {
                    using super_property = types::property_base<"grid-column">;

                    grid_column() = delete;
                    grid_column(std::string_view start, std::string_view end) : super_property(std::format("{} / {}", start, end)) {}
                    grid_column(std::string_view start) : super_property(std::string(start)) {}

                    inline static constexpr types::property_constant span{key, "span"};
                };
            }
        }
    }
}
