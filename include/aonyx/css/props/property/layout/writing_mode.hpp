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
                struct writing_mode : types::property_base<"writing-mode">, constants::global_values<writing_mode>
                {
                    using super_property = types::property_base<"writing-mode">;

                    writing_mode() = delete;
                    writing_mode(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view horizontal_tb = "horizontal-tb";
                    inline static constexpr std::string_view vertical_rl = "vertical-rl";
                    inline static constexpr std::string_view vertical_lr = "vertical-lr";
                    inline static constexpr std::string_view sideways_rl = "sideways-rl";
                    inline static constexpr std::string_view sideways_lr = "sideways-lr";
                };
            }
        }
    }
}
