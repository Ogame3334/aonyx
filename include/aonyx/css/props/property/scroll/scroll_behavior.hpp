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
                struct scroll_behavior : types::property_base<"scroll-behavior">, constants::global_values<scroll_behavior>
                {
                    using super_property = types::property_base<"scroll-behavior">;

                    scroll_behavior() = delete;
                    scroll_behavior(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view smooth = "smooth";
                };
            }
        }
    }
}
