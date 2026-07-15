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
                struct mask_type : types::property_base<"mask-type">, constants::global_values<mask_type>
                {
                    using super_property = types::property_base<"mask-type">;

                    mask_type() = delete;
                    mask_type(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view luminance = "luminance";
                    inline static constexpr std::string_view alpha = "alpha";
                };
            }
        }
    }
}
