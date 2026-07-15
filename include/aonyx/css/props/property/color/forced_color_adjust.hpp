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
                struct forced_color_adjust : types::property_base<"forced-color-adjust">, constants::global_values<forced_color_adjust>
                {
                    using super_property = types::property_base<"forced-color-adjust">;

                    forced_color_adjust() = delete;
                    forced_color_adjust(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
