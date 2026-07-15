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
                struct background_repeat_y : types::property_base<"background-repeat-y">, constants::global_values<background_repeat_y>
                {
                    using super_property = types::property_base<"background-repeat-y">;

                    background_repeat_y() = delete;
                    background_repeat_y(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view repeat = "repeat";
                    inline static constexpr std::string_view no_repeat = "no-repeat";
                    inline static constexpr std::string_view space = "space";
                    inline static constexpr std::string_view round = "round";
                };
            }
        }
    }
}
