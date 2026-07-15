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
                struct hanging_punctuation : types::property_base<"hanging-punctuation">, constants::global_values<hanging_punctuation>
                {
                    using super_property = types::property_base<"hanging-punctuation">;

                    hanging_punctuation() = delete;
                    hanging_punctuation(std::string_view v) : super_property(std::string(v)) {}
                    hanging_punctuation(std::string_view v1, std::string_view v2) : super_property(std::format("{} {}", v1, v2)) {}
                    hanging_punctuation(std::string_view v1, std::string_view v2, std::string_view v3) : super_property(std::format("{} {} {}", v1, v2, v3)) {}
                    hanging_punctuation(std::string_view v1, std::string_view v2, std::string_view v3, std::string_view v4) : super_property(std::format("{} {} {} {}", v1, v2, v3, v4)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view first = "first";
                    inline static constexpr std::string_view last = "last";
                    inline static constexpr std::string_view allow_end = "allow-end";
                    inline static constexpr std::string_view force_end = "force-end";
                };
            }
        }
    }
}
