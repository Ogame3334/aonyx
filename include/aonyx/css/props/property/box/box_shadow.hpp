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
                struct box_shadow : types::property_base<"box-shadow">, constants::global_values<box_shadow>
                {
                    using super_property = types::property_base<"box-shadow">;

                    box_shadow() = delete;
                    box_shadow(std::string_view shadow) : super_property(std::string(shadow)) {}
                    box_shadow(std::string_view shadow1, std::string_view shadow2) : super_property(std::format("{}, {}", shadow1, shadow2)) {}
                    box_shadow(std::string_view shadow1, std::string_view shadow2, std::string_view shadow3) : super_property(std::format("{}, {}, {}", shadow1, shadow2, shadow3)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
