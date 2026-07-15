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
                struct align_items : types::property_base<"align-items">, constants::global_values<align_items>
                {
                    using super_property = types::property_base<"align-items">;

                    align_items() = delete;
                    align_items(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view stretch = "stretch";
                    inline static constexpr std::string_view center = "center";
                    inline static constexpr std::string_view start = "start";
                    inline static constexpr std::string_view end = "end";
                    inline static constexpr std::string_view flex_start = "flex-start";
                    inline static constexpr std::string_view flex_end = "flex-end";
                    inline static constexpr std::string_view baseline = "baseline";
                    inline static constexpr std::string_view safe_center = "safe center";
                    inline static constexpr std::string_view unsafe_center = "unsafe center";
                };
            }
        }
    }
}
