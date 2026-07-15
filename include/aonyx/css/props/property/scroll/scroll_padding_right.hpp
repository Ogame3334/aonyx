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
                struct scroll_padding_right : types::property_base<"scroll-padding-right">, constants::global_values<scroll_padding_right>
                {
                    using super_property = types::property_base<"scroll-padding-right">;

                    scroll_padding_right() = delete;
                    scroll_padding_right(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
