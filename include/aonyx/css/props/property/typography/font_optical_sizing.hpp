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
                struct font_optical_sizing : types::property_base<"font-optical-sizing">, constants::global_values<font_optical_sizing>
                {
                    using super_property = types::property_base<"font-optical-sizing">;

                    font_optical_sizing() = delete;
                    font_optical_sizing(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
