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
                struct mask_border_repeat : types::property_base<"mask-border-repeat">, constants::global_values<mask_border_repeat>
                {
                    using super_property = types::property_base<"mask-border-repeat">;

                    mask_border_repeat() = delete;
                    mask_border_repeat(std::string_view v) : super_property(std::string(v)) {}
                    mask_border_repeat(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}

                    inline static constexpr std::string_view repeat = "repeat";
                    inline static constexpr std::string_view stretch = "stretch";
                    inline static constexpr std::string_view round = "round";
                    inline static constexpr std::string_view space = "space";
                };
            }
        }
    }
}
