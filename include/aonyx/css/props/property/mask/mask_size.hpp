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
                struct mask_size : types::property_base<"mask-size">, constants::global_values<mask_size>
                {
                    using super_property = types::property_base<"mask-size">;

                    mask_size() = delete;
                    mask_size(std::string_view v) : super_property(std::string(v)) {}
                    mask_size(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    mask_size(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {}, {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view cover = "cover";
                    inline static constexpr std::string_view contain = "contain";
                };
            }
        }
    }
}
