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
                struct overflow_y : types::property_base<"overflow-y">, constants::global_values<overflow_y>
                {
                    using super_property = types::property_base<"overflow-y">;

                    overflow_y() = delete;
                    overflow_y(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view visible = "visible";
                    inline static constexpr std::string_view hidden = "hidden";
                    inline static constexpr std::string_view clip = "clip";
                    inline static constexpr std::string_view scroll = "scroll";
                    inline static constexpr std::string_view auto_ = "auto";
                };
            }
        }
    }
}
