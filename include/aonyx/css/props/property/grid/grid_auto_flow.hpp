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
                struct grid_auto_flow : types::property_base<"grid-auto-flow">, constants::global_values<grid_auto_flow>
                {
                    using super_property = types::property_base<"grid-auto-flow">;

                    grid_auto_flow() = delete;
                    grid_auto_flow(std::string_view v) : super_property(std::string(v)) {}
                    grid_auto_flow(std::string_view direction, std::string_view packing) : super_property(std::format("{} {}", direction, packing)) {}

                    inline static constexpr std::string_view row = "row";
                    inline static constexpr std::string_view column = "column";
                    inline static constexpr std::string_view dense = "dense";
                    inline static constexpr std::string_view row_dense = "row dense";
                    inline static constexpr std::string_view column_dense = "column dense";
                };
            }
        }
    }
}
