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
                struct vector_effect : types::property_base<"vector-effect">, constants::global_values<vector_effect>
                {
                    using super_property = types::property_base<"vector-effect">;

                    vector_effect() = delete;
                    vector_effect(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view non_scaling_stroke = "non-scaling-stroke";
                };
            }
        }
    }
}
