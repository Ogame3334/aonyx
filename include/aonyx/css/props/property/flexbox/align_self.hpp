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
                struct align_self : types::property_base<"align-self">, constants::global_values<align_self>
                {
                    using super_property = types::property_base<"align-self">;

                    align_self() = delete;
                    align_self(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
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
