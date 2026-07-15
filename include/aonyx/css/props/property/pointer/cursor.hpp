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
                struct cursor : types::property_base<"cursor">, constants::global_values<cursor>
                {
                    using super_property = types::property_base<"cursor">;

                    cursor() = delete;
                    cursor(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view default_ = "default";
                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view context_menu = "context-menu";
                    inline static constexpr std::string_view help = "help";
                    inline static constexpr std::string_view pointer = "pointer";
                    inline static constexpr std::string_view progress = "progress";
                    inline static constexpr std::string_view wait = "wait";
                    inline static constexpr std::string_view cell = "cell";
                    inline static constexpr std::string_view crosshair = "crosshair";
                    inline static constexpr std::string_view text = "text";
                    inline static constexpr std::string_view vertical_text = "vertical-text";
                    inline static constexpr std::string_view alias = "alias";
                    inline static constexpr std::string_view copy = "copy";
                    inline static constexpr std::string_view move = "move";
                    inline static constexpr std::string_view no_drop = "no-drop";
                    inline static constexpr std::string_view not_allowed = "not-allowed";
                    inline static constexpr std::string_view grab = "grab";
                    inline static constexpr std::string_view grabbing = "grabbing";
                    inline static constexpr std::string_view e_resize = "e-resize";
                    inline static constexpr std::string_view n_resize = "n-resize";
                    inline static constexpr std::string_view ne_resize = "ne-resize";
                    inline static constexpr std::string_view nw_resize = "nw-resize";
                    inline static constexpr std::string_view s_resize = "s-resize";
                    inline static constexpr std::string_view se_resize = "se-resize";
                    inline static constexpr std::string_view sw_resize = "sw-resize";
                    inline static constexpr std::string_view w_resize = "w-resize";
                    inline static constexpr std::string_view ew_resize = "ew-resize";
                    inline static constexpr std::string_view ns_resize = "ns-resize";
                    inline static constexpr std::string_view nesw_resize = "nesw-resize";
                    inline static constexpr std::string_view nwse_resize = "nwse-resize";
                    inline static constexpr std::string_view col_resize = "col-resize";
                    inline static constexpr std::string_view row_resize = "row-resize";
                    inline static constexpr std::string_view all_scroll = "all-scroll";
                    inline static constexpr std::string_view zoom_in = "zoom-in";
                    inline static constexpr std::string_view zoom_out = "zoom-out";
                };
            }
        }
    }
}
