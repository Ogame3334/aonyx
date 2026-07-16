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
                struct mask_border_mode : types::property_base<"mask-border-mode">, constants::global_values<mask_border_mode>
                {
                    using super_property = types::property_base<"mask-border-mode">;

                    mask_border_mode() = delete;
                    mask_border_mode(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr types::property_constant luminance{key, "luminance"};
                    inline static constexpr types::property_constant alpha{key, "alpha"};
                };
            }
        }
    }
}
