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
                struct stroke_linecap : types::property_base<"stroke-linecap">, constants::global_values<stroke_linecap>
                {
                    using super_property = types::property_base<"stroke-linecap">;

                    stroke_linecap() = delete;
                    stroke_linecap(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view butt = "butt";
                    inline static constexpr std::string_view round = "round";
                    inline static constexpr std::string_view square = "square";
                };
            }
        }
    }
}
