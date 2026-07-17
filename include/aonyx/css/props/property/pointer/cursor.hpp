/** @brief CSS property: cursor
 *
 * cursor CSS property.
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
struct cursor : types::property_base<"cursor">, constants::global_values<cursor>
{
    using super_property = types::property_base<"cursor">;

    cursor() = delete;
    cursor(const std::string_view s) : super_property(std::string(s))
    {
    }

    inline static constexpr types::property_constant auto_{key, "auto"};
    inline static constexpr types::property_constant default_{key, "default"};
    inline static constexpr types::property_constant none{key, "none"};
    inline static constexpr types::property_constant context_menu{key, "context-menu"};
    inline static constexpr types::property_constant help{key, "help"};
    inline static constexpr types::property_constant pointer{key, "pointer"};
    inline static constexpr types::property_constant progress{key, "progress"};
    inline static constexpr types::property_constant wait{key, "wait"};
    inline static constexpr types::property_constant cell{key, "cell"};
    inline static constexpr types::property_constant crosshair{key, "crosshair"};
    inline static constexpr types::property_constant text{key, "text"};
    inline static constexpr types::property_constant vertical_text{key, "vertical-text"};
    inline static constexpr types::property_constant alias{key, "alias"};
    inline static constexpr types::property_constant copy{key, "copy"};
    inline static constexpr types::property_constant move{key, "move"};
    inline static constexpr types::property_constant no_drop{key, "no-drop"};
    inline static constexpr types::property_constant not_allowed{key, "not-allowed"};
    inline static constexpr types::property_constant grab{key, "grab"};
    inline static constexpr types::property_constant grabbing{key, "grabbing"};
    inline static constexpr types::property_constant e_resize{key, "e-resize"};
    inline static constexpr types::property_constant n_resize{key, "n-resize"};
    inline static constexpr types::property_constant ne_resize{key, "ne-resize"};
    inline static constexpr types::property_constant nw_resize{key, "nw-resize"};
    inline static constexpr types::property_constant s_resize{key, "s-resize"};
    inline static constexpr types::property_constant se_resize{key, "se-resize"};
    inline static constexpr types::property_constant sw_resize{key, "sw-resize"};
    inline static constexpr types::property_constant w_resize{key, "w-resize"};
    inline static constexpr types::property_constant ew_resize{key, "ew-resize"};
    inline static constexpr types::property_constant ns_resize{key, "ns-resize"};
    inline static constexpr types::property_constant nesw_resize{key, "nesw-resize"};
    inline static constexpr types::property_constant nwse_resize{key, "nwse-resize"};
    inline static constexpr types::property_constant col_resize{key, "col-resize"};
    inline static constexpr types::property_constant row_resize{key, "row-resize"};
    inline static constexpr types::property_constant all_scroll{key, "all-scroll"};
    inline static constexpr types::property_constant zoom_in{key, "zoom-in"};
    inline static constexpr types::property_constant zoom_out{key, "zoom-out"};
};
} // namespace property
} // namespace props
} // namespace css
} // namespace aonyx
