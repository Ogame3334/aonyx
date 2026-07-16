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
                struct outline_color : types::property_base<"outline-color">, constants::global_values<outline_color>
                {
                    using super_property = types::property_base<"outline-color">;

                    outline_color() = delete;
                    outline_color(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant auto_{key, "auto"};
                };
            }
        }
    }
}
