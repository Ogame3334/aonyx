/** @brief CSS property: grid-area
 *
 * grid-area CSS property.
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
                struct grid_area : types::property_base<"grid-area">, constants::global_values<grid_area>
                {
                    using super_property = types::property_base<"grid-area">;

                    grid_area() = delete;
                    grid_area(std::string_view row_start, std::string_view column_start, std::string_view row_end, std::string_view column_end) : super_property(std::format("{} / {} / {} / {}", row_start, column_start, row_end, column_end)) {}
                    grid_area(std::string_view row_start, std::string_view column_start) : super_property(std::format("{} / {}", row_start, column_start)) {}
                    grid_area(std::string_view row_start) : super_property(std::string(row_start)) {}
                };
            }
        }
    }
}
