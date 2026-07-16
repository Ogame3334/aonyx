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
                struct mask_border_outset : types::property_base<"mask-border-outset">, constants::global_values<mask_border_outset>
                {
                    using super_property = types::property_base<"mask-border-outset">;

                    mask_border_outset() = delete;
                    mask_border_outset(std::string_view v) : super_property(std::string(v)) {}
                    mask_border_outset(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    mask_border_outset(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    mask_border_outset(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}
                };
            }
        }
    }
}
