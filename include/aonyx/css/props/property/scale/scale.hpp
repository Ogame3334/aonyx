#pragma once

#include <format>

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
                struct scale : types::property_base<"scale">, constants::global_values<scale>
                {
                    scale() = delete;
                    scale(double a)
                    {
                        value = std::to_string(a);
                    }
                    scale(double a, double b)
                    {
                        value = std::format("{} {}", a, b);
                    }
                    scale(double a, double b, double c)
                    {
                        value = std::format("{} {} {}", a, b, c);
                    }

                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
