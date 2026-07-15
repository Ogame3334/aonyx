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
                struct color : types::property_base<"color">, constants::global_values<color>
                {
                    using super_property = types::property_base<"color">;

                    color() = delete;
                    color(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view current_color = "currentcolor";
                };
            }
        }
    }
}
