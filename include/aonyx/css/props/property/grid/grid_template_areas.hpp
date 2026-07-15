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
                struct grid_template_areas : types::property_base<"grid-template-areas">, constants::global_values<grid_template_areas>
                {
                    using super_property = types::property_base<"grid-template-areas">;

                    grid_template_areas() = delete;
                    grid_template_areas(std::string_view v) : super_property(std::string(v)) {}
                    grid_template_areas(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    grid_template_areas(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    grid_template_areas(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
