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
                struct dominant_baseline : types::property_base<"dominant-baseline">, constants::global_values<dominant_baseline>
                {
                    using super_property = types::property_base<"dominant-baseline">;

                    dominant_baseline() = delete;
                    dominant_baseline(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view alphabetic = "alphabetic";
                    inline static constexpr std::string_view hanging = "hanging";
                    inline static constexpr std::string_view ideographic = "ideographic";
                    inline static constexpr std::string_view mathematical = "mathematical";
                    inline static constexpr std::string_view central = "central";
                    inline static constexpr std::string_view middle = "middle";
                    inline static constexpr std::string_view text_after_edge = "text-after-edge";
                    inline static constexpr std::string_view text_before_edge = "text-before-edge";
                };
            }
        }
    }
}
