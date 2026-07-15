#pragma once

#include <string>
#include <format>
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
                struct rotate : types::property_base<"rotate">, constants::global_values<rotate>
                {
                    using super_property = types::property_base<"rotate">;

                    rotate() = delete;
                    rotate(std::string_view v) : super_property(std::string(v)) {}
                    rotate(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view x = "x";
                    inline static constexpr std::string_view y = "y";
                    inline static constexpr std::string_view z = "z";
                };
            }
        }
    }
}
