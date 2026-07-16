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
                struct transition_behavior : types::property_base<"transition-behavior">, constants::global_values<transition_behavior>
                {
                    using super_property = types::property_base<"transition-behavior">;

                    transition_behavior() = delete;
                    transition_behavior(std::string_view v) : super_property(std::string(v)) {}
                    transition_behavior(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr types::property_constant normal{key, "normal"};
                    inline static constexpr types::property_constant allow_discrete{key, "allow-discrete"};
                };
            }
        }
    }
}
