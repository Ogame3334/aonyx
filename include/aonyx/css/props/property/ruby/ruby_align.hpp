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
                struct ruby_align : types::property_base<"ruby-align">, constants::global_values<ruby_align>
                {
                    using super_property = types::property_base<"ruby-align">;

                    ruby_align() = delete;
                    ruby_align(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view start = "start";
                    inline static constexpr std::string_view center = "center";
                    inline static constexpr std::string_view space_around = "space-around";
                    inline static constexpr std::string_view space_between = "space-between";
                };
            }
        }
    }
}
