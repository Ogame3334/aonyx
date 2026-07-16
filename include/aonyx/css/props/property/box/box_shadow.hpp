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
                    box_shadow(const std::string_view s) : super_property(std::string(s)) {}
                    box_shadow(util::numerical shadow1, util::numerical shadow2, std::string_view color) : super_property(std::format("{} {} {}", shadow1, shadow2, color)) {}
                    box_shadow(util::numerical shadow1, util::numerical shadow2, util::numerical shadow3, std::string_view color) : super_property(std::format("{} {} {} {}", shadow1, shadow2, shadow3, color)) {}

                    inline static constexpr types::property_constant none{key, "none"};
                };
            }
        }
    }
}
