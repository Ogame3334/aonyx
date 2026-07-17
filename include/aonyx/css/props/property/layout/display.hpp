/** @brief CSS property: display
 *
 * display CSS property.
 */
#pragma once

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
struct display : types::property_base<"display">, constants::global_values<display>
{
    using super_property = types::property_base<"display">;

    display() = delete;
    display(std::string_view v) : super_property(std::string(v))
    {
    }

    inline static constexpr types::property_constant block{key, "block"};
    inline static constexpr types::property_constant inline_{key, "inline"};
    inline static constexpr types::property_constant inline_block{key, "inline-block"};
    inline static constexpr types::property_constant flex{key, "flex"};
    inline static constexpr types::property_constant inline_flex{key, "inline-flex"};
    inline static constexpr types::property_constant grid{key, "grid"};
    inline static constexpr types::property_constant inline_grid{key, "inline-grid"};
    inline static constexpr types::property_constant table{key, "table"};
    inline static constexpr types::property_constant inline_table{key, "inline-table"};
    inline static constexpr types::property_constant table_row{key, "table-row"};
    inline static constexpr types::property_constant table_cell{key, "table-cell"};
    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant contents{key, "contents"};
    inline static constexpr types::property_constant list_item{key, "list-item"};
    inline static constexpr types::property_constant block_flow{key, "block flow"};
    inline static constexpr types::property_constant block_flex{key, "block flex"};
    inline static constexpr types::property_constant block_grid{key, "block grid"};
    inline static constexpr types::property_constant inline_flow{key, "inline flow"};
    inline static constexpr types::property_constant inline_flow_root{key, "inline flow-root"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
