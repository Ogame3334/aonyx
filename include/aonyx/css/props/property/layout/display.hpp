#pragma once

#include <string>
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
                struct display : types::property_base<"display">, constants::global_values<display>
                {
                    using super_property = types::property_base<"display">;

                    display() = delete;
                    display(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view block = "block";
                    inline static constexpr std::string_view inline_ = "inline";
                    inline static constexpr std::string_view inline_block = "inline-block";
                    inline static constexpr std::string_view flex = "flex";
                    inline static constexpr std::string_view inline_flex = "inline-flex";
                    inline static constexpr std::string_view grid = "grid";
                    inline static constexpr std::string_view inline_grid = "inline-grid";
                    inline static constexpr std::string_view table = "table";
                    inline static constexpr std::string_view inline_table = "inline-table";
                    inline static constexpr std::string_view table_row = "table-row";
                    inline static constexpr std::string_view table_cell = "table-cell";
                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view contents = "contents";
                    inline static constexpr std::string_view list_item = "list-item";
                    inline static constexpr std::string_view block_flow = "block flow";
                    inline static constexpr std::string_view block_flex = "block flex";
                    inline static constexpr std::string_view block_grid = "block grid";
                    inline static constexpr std::string_view inline_flow = "inline flow";
                    inline static constexpr std::string_view inline_flow_root = "inline flow-root";
                };
            }
        }
    }
}
