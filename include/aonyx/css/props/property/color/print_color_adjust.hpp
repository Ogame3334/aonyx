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
                struct print_color_adjust : types::property_base<"print-color-adjust">, constants::global_values<print_color_adjust>
                {
                    using super_property = types::property_base<"print-color-adjust">;

                    print_color_adjust() = delete;
                    print_color_adjust(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view exact = "exact";
                };
            }
        }
    }
}
