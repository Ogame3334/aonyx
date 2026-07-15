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
                struct clear : types::property_base<"clear">, constants::global_values<clear>
                {
                    using super_property = types::property_base<"clear">;

                    clear() = delete;
                    clear(std::string_view v) : super_property(std::string(v)) {}

                    inline static constexpr std::string_view none = "none";
                    inline static constexpr std::string_view left = "left";
                    inline static constexpr std::string_view right = "right";
                    inline static constexpr std::string_view both = "both";
                    inline static constexpr std::string_view inline_start = "inline-start";
                    inline static constexpr std::string_view inline_end = "inline-end";
                };
            }
        }
    }
}
