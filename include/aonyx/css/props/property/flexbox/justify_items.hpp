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
                struct justify_items : types::property_base<"justify-items">, constants::global_values<justify_items>
                {
                    using super_property = types::property_base<"justify-items">;

                    justify_items() = delete;
                    justify_items(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view normal = "normal";
                    inline static constexpr std::string_view stretch = "stretch";
                    inline static constexpr std::string_view center = "center";
                    inline static constexpr std::string_view start = "start";
                    inline static constexpr std::string_view end = "end";
                    inline static constexpr std::string_view flex_start = "flex-start";
                    inline static constexpr std::string_view flex_end = "flex-end";
                    inline static constexpr std::string_view self_start = "self-start";
                    inline static constexpr std::string_view self_end = "self-end";
                    inline static constexpr std::string_view left = "left";
                    inline static constexpr std::string_view right = "right";
                    inline static constexpr std::string_view baseline = "baseline";
                    inline static constexpr std::string_view safe_center = "safe center";
                    inline static constexpr std::string_view unsafe_center = "unsafe center";
                    inline static constexpr std::string_view legacy_left = "legacy left";
                    inline static constexpr std::string_view legacy_right = "legacy right";
                    inline static constexpr std::string_view legacy_center = "legacy center";
                };
            }
        }
    }
}
