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
                struct scroll_padding : types::property_base<"scroll-padding">, constants::global_values<scroll_padding>
                {
                    using super_property = types::property_base<"scroll-padding">;

                    scroll_padding() = delete;
                    scroll_padding(std::string_view v) : super_property(std::string(v)) {}
                    scroll_padding(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    scroll_padding(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    scroll_padding(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}
                };
            }
        }
    }
}
