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
                struct font : types::property_base<"font">, constants::global_values<font>
                {
                    using super_property = types::property_base<"font">;

                    font() = delete;
                    font(std::string_view system_font) : super_property(std::string(system_font)) {}
                    font(std::string_view style, std::string_view weight, util::numerical size, std::string_view family) : super_property(std::format("{} {} {} {}", style, weight, size, family)) {}

                    inline static constexpr types::property_constant caption{key, "caption"};
                    inline static constexpr types::property_constant icon{key, "icon"};
                    inline static constexpr types::property_constant menu{key, "menu"};
                    inline static constexpr types::property_constant message_box{key, "message-box"};
                    inline static constexpr types::property_constant small_caption{key, "small-caption"};
                    inline static constexpr types::property_constant status_bar{key, "status-bar"};
                };
            }
        }
    }
}
