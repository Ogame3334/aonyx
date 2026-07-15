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
                struct scroll_margin_left : types::property_base<"scroll-margin-left">, constants::global_values<scroll_margin_left>
                {
                    using super_property = types::property_base<"scroll-margin-left">;

                    scroll_margin_left() = delete;
                    scroll_margin_left(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
