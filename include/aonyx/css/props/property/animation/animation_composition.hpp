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
                struct animation_composition : types::property_base<"animation-composition">, constants::global_values<animation_composition>
                {
                    using super_property = types::property_base<"animation-composition">;

                    animation_composition() = delete;
                    animation_composition(std::string_view v) : super_property(std::string(v)) {}
                    animation_composition(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view replace = "replace";
                    inline static constexpr std::string_view add = "add";
                    inline static constexpr std::string_view accumulate = "accumulate";
                };
            }
        }
    }
}
