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
                struct justify_content : types::property_base<"justify-content">, constants::global_values<justify_content>
                {
                    using super_property = types::property_base<"justify-content">;

                    justify_content() = delete;
                    justify_content(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view stretch = "stretch";
                    inline static constexpr std::string_view center = "center";
                    inline static constexpr std::string_view start = "start";
                    inline static constexpr std::string_view end = "end";
                    inline static constexpr std::string_view flex_start = "flex-start";
                    inline static constexpr std::string_view flex_end = "flex-end";
                    inline static constexpr std::string_view space_between = "space-between";
                    inline static constexpr std::string_view space_around = "space-around";
                    inline static constexpr std::string_view space_evenly = "space-evenly";
                    inline static constexpr std::string_view safe_center = "safe center";
                    inline static constexpr std::string_view unsafe_center = "unsafe center";
                };
            }
        }
    }
}
