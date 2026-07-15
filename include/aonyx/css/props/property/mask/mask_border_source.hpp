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
                struct mask_border_source : types::property_base<"mask-border-source">, constants::global_values<mask_border_source>
                {
                    using super_property = types::property_base<"mask-border-source">;

                    mask_border_source() = delete;
                    mask_border_source(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
