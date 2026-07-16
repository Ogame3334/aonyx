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
                struct grid : types::property_base<"grid">, constants::global_values<grid>
                {
                    using super_property = types::property_base<"grid">;

                    grid() = delete;
                    grid(std::string_view template_, std::string_view auto_flow) : super_property(std::format("{} / {}", template_, auto_flow)) {}
                    grid(std::string_view template_) : super_property(std::string(template_)) {}
                    grid(std::string_view template_, std::string_view auto_flow, std::string_view auto_columns) : super_property(std::format("{} / {} / {}", template_, auto_flow, auto_columns)) {}
                };
            }
        }
    }
}
