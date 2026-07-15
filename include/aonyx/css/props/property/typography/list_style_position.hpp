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
                struct list_style_position : types::property_base<"list-style-position">, constants::global_values<list_style_position>
                {
                    using super_property = types::property_base<"list-style-position">;

                    list_style_position() = delete;
                    list_style_position(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view inside = "inside";
                    inline static constexpr std::string_view outside = "outside";
                };
            }
        }
    }
}
