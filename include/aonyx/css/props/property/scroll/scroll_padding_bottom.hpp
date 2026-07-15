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
                struct scroll_padding_bottom : types::property_base<"scroll-padding-bottom">, constants::global_values<scroll_padding_bottom>
                {
                    using super_property = types::property_base<"scroll-padding-bottom">;

                    scroll_padding_bottom() = delete;
                    scroll_padding_bottom(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
