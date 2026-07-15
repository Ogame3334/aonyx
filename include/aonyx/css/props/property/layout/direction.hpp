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
                struct direction : types::property_base<"direction">, constants::global_values<direction>
                {
                    using super_property = types::property_base<"direction">;

                    direction() = delete;
                    direction(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view ltr = "ltr";
                    inline static constexpr std::string_view rtl = "rtl";
                };
            }
        }
    }
}
