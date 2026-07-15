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
                struct mask_composite : types::property_base<"mask-composite">, constants::global_values<mask_composite>
                {
                    using super_property = types::property_base<"mask-composite">;

                    mask_composite() = delete;
                    mask_composite(std::string_view v) : super_property(std::string(v)) {}
                    mask_composite(std::string_view v1, std::string_view v2) : super_property(std::format("{}, {}", v1, v2)) {}

                    inline static constexpr std::string_view add = "add";
                    inline static constexpr std::string_view subtract = "subtract";
                    inline static constexpr std::string_view intersect = "intersect";
                    inline static constexpr std::string_view exclude = "exclude";
                };
            }
        }
    }
}
