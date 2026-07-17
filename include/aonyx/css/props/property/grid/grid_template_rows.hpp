/** @brief CSS property: grid-template-rows
 *
 * grid-template-rows CSS property.
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
                struct grid_template_rows : types::property_base<"grid-template-rows">, constants::global_values<grid_template_rows>
                {
                    using super_property = types::property_base<"grid-template-rows">;

                    grid_template_rows() = delete;
                    grid_template_rows(std::string_view v) : super_property(std::string(v)) {}
                    grid_template_rows(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    grid_template_rows(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    grid_template_rows(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
