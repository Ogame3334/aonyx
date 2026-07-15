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
                struct grid_template : types::property_base<"grid-template">, constants::global_values<grid_template>
                {
                    using super_property = types::property_base<"grid-template">;

                    grid_template() = delete;
                    grid_template(std::string_view rows, std::string_view columns) : super_property(std::format("{} / {}", rows, columns)) {}
                    grid_template(std::string_view rows, std::string_view columns, std::string_view areas) : super_property(std::format("{} / {} / {}", rows, columns, areas)) {}
                    grid_template(std::string_view rows) : super_property(std::string(rows)) {}

                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
