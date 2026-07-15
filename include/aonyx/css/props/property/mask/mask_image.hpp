#pragma once

#include <string>
#include <format>
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
                struct mask_image : types::property_base<"mask-image">, constants::global_values<mask_image>
                {
                    using super_property = types::property_base<"mask-image">;

                    mask_image() = delete;
                    mask_image(std::string_view v) : super_property(std::string(v)) {}
                    mask_image(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view none = "none";
                };
            }
        }
    }
}
