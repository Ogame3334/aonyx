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
                struct scroll_margin_top : types::property_base<"scroll-margin-top">, constants::global_values<scroll_margin_top>
                {
                    using super_property = types::property_base<"scroll-margin-top">;

                    scroll_margin_top() = delete;
                    scroll_margin_top(std::string_view v) : super_property(std::string(v)) {}
                };
            }
        }
    }
}
