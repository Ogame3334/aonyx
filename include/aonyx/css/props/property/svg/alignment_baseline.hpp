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
                struct alignment_baseline : types::property_base<"alignment-baseline">, constants::global_values<alignment_baseline>
                {
                    using super_property = types::property_base<"alignment-baseline">;

                    alignment_baseline() = delete;
                    alignment_baseline(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view auto_ = "auto";
                    inline static constexpr std::string_view alphabetic = "alphabetic";
                    inline static constexpr std::string_view baseline = "baseline";
                    inline static constexpr std::string_view before_edge = "before-edge";
                    inline static constexpr std::string_view text_before_edge = "text-before-edge";
                    inline static constexpr std::string_view middle = "middle";
                    inline static constexpr std::string_view central = "central";
                    inline static constexpr std::string_view after_edge = "after-edge";
                    inline static constexpr std::string_view text_after_edge = "text-after-edge";
                    inline static constexpr std::string_view ideographic = "ideographic";
                    inline static constexpr std::string_view hanging = "hanging";
                    inline static constexpr std::string_view mathematical = "mathematical";
                };
            }
        }
    }
}
