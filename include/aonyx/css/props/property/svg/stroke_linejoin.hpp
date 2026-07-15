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
                struct stroke_linejoin : types::property_base<"stroke-linejoin">, constants::global_values<stroke_linejoin>
                {
                    using super_property = types::property_base<"stroke-linejoin">;

                    stroke_linejoin() = delete;
                    stroke_linejoin(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view miter = "miter";
                    inline static constexpr std::string_view round = "round";
                    inline static constexpr std::string_view bevel = "bevel";
                };
            }
        }
    }
}
