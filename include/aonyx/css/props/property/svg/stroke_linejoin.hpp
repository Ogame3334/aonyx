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

                    inline static constexpr types::property_constant miter{key, "miter"};
                    inline static constexpr types::property_constant round{key, "round"};
                    inline static constexpr types::property_constant bevel{key, "bevel"};
                };
            }
        }
    }
}
