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
                struct mask_border_slice : types::property_base<"mask-border-slice">, constants::global_values<mask_border_slice>
                {
                    using super_property = types::property_base<"mask-border-slice">;

                    mask_border_slice() = delete;
                    mask_border_slice(std::string_view v) : super_property(std::string(v)) {}
                    mask_border_slice(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    mask_border_slice(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    mask_border_slice(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}
                    mask_border_slice(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4, std::string_view fill) : super_property(std::format("{} {} {} {} {}", v1, v2, v3, v4, fill)) {}

                    inline static constexpr types::property_constant fill{key, "fill"};
                };
            }
        }
    }
}
