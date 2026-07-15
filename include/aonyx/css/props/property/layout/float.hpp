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
                struct float_ : types::property_base<"float">, constants::global_values<float_>
                {
                    using super_property = types::property_base<"float">;

                    float_() = delete;
                    float_(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view left = "left";
                    inline static constexpr std::string_view right = "right";
                    inline static constexpr std::string_view inline_start = "inline-start";
                    inline static constexpr std::string_view inline_end = "inline-end";
                };
            }
        }
    }
}
