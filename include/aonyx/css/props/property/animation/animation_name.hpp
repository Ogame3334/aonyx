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
                struct animation_name : types::property_base<"animation-name">, constants::global_values<animation_name>
                {
                    using super_property = types::property_base<"animation-name">;

                    animation_name() = delete;
                    animation_name(std::string_view v) : super_property(std::string(v)) {}
                    animation_name(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
